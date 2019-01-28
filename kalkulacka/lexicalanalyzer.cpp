#include "lexicalanalyzer.h"
#include <qdebug.h>
#include <QtDebug>
#include <QDebug>
#include <iostream>
using namespace std;

LexicalAnalyzer::LexicalAnalyzer(QString const& input)
{
    this->input= input;
    this->currentIndex=0;
    this->expectedSignFlag=true;


    this->startAnalyze();


    QVectorIterator<TokenLexemePair> i(this->tokensList);
    while (i.hasNext())
        qDebug() << i.next().lexeme<<endl;

}

QVector<TokenLexemePair> & LexicalAnalyzer::getTokenLexemePairList()
{
    return this->tokensList;
}

bool LexicalAnalyzer::isOp(QChar const& input)
{
    if (input=='X' || input=='+' || input=='-' || input=='/')
        return true;

    return false;
}

bool LexicalAnalyzer::isSign(QChar const& input)
{
    if ( input=='+' || input=='-')
        return true;

    return false;

}


void LexicalAnalyzer::recurAnalyze()
{

    int state=0;
    while (this->currentIndex< this->input.size())
    {
        switch(state)
        {

        case 0:
            if (this->findNum())
            {
                state=1;
                break;
            }

            else if (this->findOpeningParenthesis())
            {
                 this->recurAnalyze();
                 state=1;
                 break;
            }

            else {

                         exit(EXIT_FAILURE);
            }

          case 1:
              if (this->findOp())
              {
                  state=2;
              }

              else if (this->findClosingParenthesis())
              {
                  return;
              }

              else {

                  exit(EXIT_FAILURE);
              }

          case 2:

            if (this->findNum())
            {
                state=1;
            }

            else if (this->findOpeningParenthesis())
            {
                //recur analysis
                this->recurAnalyze();
                state=1;
                break;
            }

            else
            {

                exit(EXIT_FAILURE);
            }
        }

     }


    exit(EXIT_FAILURE);
}

void LexicalAnalyzer::startAnalyze()
{

    int state=0;
    while (this->currentIndex< this->input.size())
    {
        switch(state)
        {

        case 0:
            if (this->findNum())
            {
                state=1;
                break;
            }

            else if (this->findOpeningParenthesis())
            {

                this->recurAnalyze();
                state=1;
                break;
            }

            else {

                         exit(EXIT_FAILURE);
            }

          case 1:
              if (this->findOp())
              {
                  state=2;
                  break;
              }

              else {

                  exit(EXIT_FAILURE);
              }

          case 2:

            if (this->findNum())
            {
                state=1;
                break;
            }

            else if (this->findOpeningParenthesis())
            {
                //recur analysis
                this->recurAnalyze();
                state=1;
                break;
            }

            else
            {

                exit(EXIT_FAILURE);
            }
        }

     }

}

bool LexicalAnalyzer::findOpeningParenthesis()
{
    if (this->input[this->currentIndex]=='(')
    {
        TokenLexemePair a;
        a.tokenType= OPENING_PARENTHESIS;
        a.lexeme="(";
        this->tokensList.push_back(a);
        this->currentIndex++;
        return true;
    }
    return false;
}

bool LexicalAnalyzer::findClosingParenthesis()
{
    if (this->input[this->currentIndex]==')')
    {
        TokenLexemePair a;
        a.tokenType= CLOSING_PARENTHESIS;
        a.lexeme=")";
        this->tokensList.push_back(a);
        this->currentIndex++;
        return true;
    }
    return false;
}

bool LexicalAnalyzer::findOp()
{
    if ( input[this->currentIndex]=='+' || input[this->currentIndex]=='-' || input[this->currentIndex]=='X' || input[this->currentIndex]=='/')
    {

        TokenLexemePair a;
        a.tokenType= OPERATOR;
        a.lexeme=this->input[this->currentIndex];
        this->tokensList.push_back(a);
        this->currentIndex++;
        return true;

    }
    return false;
}

bool LexicalAnalyzer::isDigit(QChar const& data)
{
    if (data>='0' && data<='9')
    {
       return true;
    }

    return false;
}

bool LexicalAnalyzer::findNum()
{

    QString current_token="";
    short state=0;


    while (this->currentIndex< this->input.size())
    {
        switch(state)
        {
             case 0:
                       if (this->isSign(this->input[this->currentIndex]))
                       {
                           current_token=this->input[this->currentIndex];
                           this->currentIndex++;
                           if (this->currentIndex== this->input.size())
                           {

                               exit(EXIT_FAILURE);
                           }
                           state=1;
                           break;

                       }

                       else if (this->isDigit(this->input[this->currentIndex]))
                       {
                           current_token=this->input[this->currentIndex];
                             this->currentIndex++;
                           if (this->currentIndex== this->input.size())
                           {
                               TokenLexemePair a;
                               a.tokenType= NUMBER;
                               a.lexeme=current_token;
                               this->tokensList.push_back(a);

                               return true;
                           }
                             state=2;
                             break;

                       }

                       else if (this->input[this->currentIndex]=='.')
                       {
                           state=3;
                           current_token='.';
                           this->currentIndex++;
                           if (this->currentIndex== this->input.size())
                           {

                               exit(EXIT_FAILURE);
                           }
                           break;
                       }

                       else
                       {

                         return false;
                       }


          case 1:
            if (this->input[this->currentIndex]=='.')
            {
                current_token+='.';
                this->currentIndex++;
                if (this->currentIndex== this->input.size())
                {

                    exit(EXIT_FAILURE);
                }
                state=3;
                break;
            }
            else if (this->isDigit(this->input[this->currentIndex]))
            {
               current_token+= this->input[this->currentIndex];
               this->currentIndex++;
               if (this->currentIndex== this->input.size())
               {
                   TokenLexemePair a;
                   a.tokenType= NUMBER;
                   a.lexeme=current_token;
                   this->tokensList.push_back(a);

                   return true;
               }
               state=2;
               break;
            }

            else  {


                exit(EXIT_FAILURE);
            }
           case 2:
                   if (this->isDigit(this->input[this->currentIndex]))
                   {
                          state=2;
                          current_token+= this->input[this->currentIndex];
                          this->currentIndex++;
                          if (this->currentIndex== this->input.size())
                          {
                              TokenLexemePair a;
                              a.tokenType= NUMBER;
                              a.lexeme=current_token;
                              this->tokensList.push_back(a);

                              return true;
                          }
                          break;

                   }
                   else if (this->input[this->currentIndex]=='.')
                   {
                       state=3;
                       current_token+='.';
                       this->currentIndex++;
                       if (this->currentIndex== this->input.size())
                       {


                           exit(EXIT_FAILURE);
                       }
                       break;
                   }

                   else {
                       TokenLexemePair a;
                       a.tokenType= NUMBER;
                       a.lexeme=current_token;
                       this->tokensList.push_back(a);

                                    return true;
                   }


          case 3:

                  if (this->isDigit(this->input[this->currentIndex]))
                  {
                      current_token+= this->input[this->currentIndex];
                       this->currentIndex++;
                      state=4;
                      if (this->currentIndex== this->input.size())
                      {
                          TokenLexemePair a;
                          a.tokenType= NUMBER;
                          a.lexeme=current_token;
                          this->tokensList.push_back(a);

                          return true;
                      }
                      break;
                  }


                  else {

                               exit(EXIT_FAILURE);
                  }


          case 4:
                 if (this->isDigit(this->input[this->currentIndex]))
                 {
                     current_token+= this->input[this->currentIndex];
                     this->currentIndex++;
                     state=4;
                     if (this->currentIndex== this->input.size())
                     {
                         TokenLexemePair a;
                         a.tokenType= NUMBER;
                         a.lexeme=current_token;
                         this->tokensList.push_back(a);

                         return true;
                     }
                     break;
                 }

                 else if (this->input[this->currentIndex]=='.')
                 {

                      exit(EXIT_FAILURE);
                 }
                 else {
                     TokenLexemePair a;
                     a.tokenType= NUMBER;
                     a.lexeme=current_token;
                     this->tokensList.push_back(a);

                     return true;
                 }

    }

}
    return false;

}
LexicalAnalyzer::~LexicalAnalyzer()
{

}

