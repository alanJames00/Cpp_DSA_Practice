#include<iostream>
#include<stack>
#include<math.h>
#include<string>
using namespace std;
/*
    Problem Statement:
    Evaluate a given prefix notation expression
*/

int prefix_eval(string str) {

    stack<int> st;
    //Iterate over  the string from the right to left
    for(int i=str.length()-1; i>=0; i--){
        // Check if the char is operator or operand
        
        if(str[i] >= '0' && str[i]<='9'){
            st.push(str[i] - '0');// Logic to convert chars to int
        }
        else{
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();
            
            switch(str[i]){
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1 - operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
                case '/':
                    st.push(operand1 / operand2);
                    break;
                case '^':
                    st.push(pow(operand1,operand2));
                    break;
            }
        }
    }
    return st.top();
}


int main(){
    string expr  = "-+7*45+20";   
    cout<<prefix_eval(expr);


    return 0;
}