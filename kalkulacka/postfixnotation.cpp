#include "postfixnotation.h"

PostFixNotation::PostFixNotation(QVector<TokenLexemePair> &a)
{



     this->convertToPostFix(a);

}


void PostFixNotation::convertToPostFix(QVector<TokenLexemePair> tokensList)
{

    QVectorIterator<TokenLexemePair> i(tokensList);
    while (i.hasNext())
    {
         TokenLexemePair tlp=i.next();
        if (tlp.tokenType==NUMBER)
        {
            this->numbers.push_front(tlp.lexeme.toDouble());
            continue;
        }//end of if

        else if (tlp.tokenType==OPERATOR || tlp.tokenType==OPENING_PARENTHESIS || tlp.tokenType==CLOSING_PARENTHESIS)
        {
           if (this->operators.size()==0)
            {
               this->operators.push_front(tlp.lexeme[0]);
               continue;
            }



           bool ret=this->hasPrec(this->operators.front(), tlp.lexeme[0]);

           if (ret==true)
           {

               if (tlp.lexeme[0]==')')
               {
                 while (this->operators.front()!='(')
                 {
                     double operand2= this->numbers.front();
                     this->numbers.pop_front();
                     double operand1=this->numbers.front();
                     this->numbers.pop_front();

                     double answer= this->evaluate(operand1, operand2, operators.front());
                     this->numbers.push_front(answer);
                     operators.pop_front();

                 }
                 this->operators.pop_front();//popping (
                 continue;
               }

                 else //if is not )
               {
                   double operand2= this->numbers.front();
                   this->numbers.pop_front();
                   double operand1=this->numbers.front();
                   this->numbers.pop_front();

                   double answer= this->evaluate(operand1, operand2, operators.front());
                    this->numbers.push_front(answer);
                    this->operators.pop_front();
                    this->operators.push_front(tlp.lexeme[0]);

               }


           }

           else this->operators.push_front(tlp.lexeme[0]);

        }


    }


    while (this->operators.size()>0)
    {
       double operand2= this->numbers.front();
       this->numbers.pop_front();
       double operand1= this->numbers.front();
       this->numbers.pop_front();

       double answer= this->evaluate(operand1, operand2, this->operators.front());
       this->operators.pop_front();
       this->numbers.push_front(answer);
    }



}

 double PostFixNotation::evaluate( double const& operand1, double const& operand2, QChar const& operator_)
 {
     if (operator_=='-')
     {
          return (operand1 - operand2);
     }
     else if (operator_=='+')
     {
         return operand1+operand2;
     }
     else if (operator_=='/')
     {
         return operand1/operand2;
     }
     else if (operator_=='X')
     {
         return operand1*operand2;
     }
return 0;
 }

 double PostFixNotation::getAnswer()
 {
     double num= this->numbers.front();
     this->numbers.pop_front();
     return num;
 }

bool PostFixNotation::hasPrec(const QChar& op1, const QChar& op2)
{

    if (op1=='(')
        return false;

    if (op2==')')
        return true;

    if (op2=='(')
        return false;



    if (op1=='/' || op1=='X')
    {
        if (op2=='/' || op2=='+' || op2=='-' || op2=='X')
            return true;
    }

    else if (op1=='+' || op1=='-')
    {
             if (op2=='/' || op2=='X')
                 return false;

             if (op2=='+' || op2=='-')
                 return true;

    }

return 0;

}

PostFixNotation::~PostFixNotation()
{

}

