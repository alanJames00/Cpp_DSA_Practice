#include<iostream>
#include<stack>
using namespace std;

int main(){
    


    return 0;
}

/* Problem Statement
-------------------





*/

/*

A. Infix Expressions:
------------------

Normal Operation representation: operand operator operator
This is same as the infix notation:
eg: 4 * 2 + 5

How to evaluate the INFIX Notations
Precedence of the operations in infix notations

Precedence Order as follows:
---------------------------
 (), {}, []
 ^
 *, /
 +, -

Note: If you have same level of expression, evaluation is done in 
Left to Right Order except in case of exponent
Eg: 2+5-7-8
    ------> Left to right evaluation
Note2: incase of exponential precedence of same level operators is
        Right to Left
Eg: 2^3^5
    <------ Right to left evaluation

C. Prefix Notation (aka. Polish Notation):
----------------

form: operator operand operand

    infix not.
Eg: 4 * 7 +3 -----> ((4 * 7)+3) --> + * 4 2 3
step(1): find the precedence among the operators and wrap them in braces
step(2): write the operator in the beginning as in the relative order

Eg : 5/4 + 9 --> 
Eg : 3 - 9/2 --> (3-(9/2)) --> -3 / 9 2



B. Postfix Notation (aka. Reverse polish Notation)
----------------

Eg: (4*2)+3) --> 4 2 * 3 +

(5 - 9)
*/  