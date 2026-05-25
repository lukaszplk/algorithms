// Reverse Polish Notation (RPN) Evaluator
// Supports single-digit operands and + - * / operators.
// Input: space-separated tokens from stdin (e.g. "3 4 + 2 *")

#include <iostream>
#include <stack>
#include <stdexcept>
#include <ctype.h>
using namespace std;

int main(){
    stack<int> stos;
    char fig;

    while(cin >> fig){
        if(isdigit(fig)){
            stos.push(int(fig) - '0');
        } else if(fig=='+' || fig=='-' || fig=='/' || fig=='*'){
            if(stos.size() < 2){
                cerr << "Error: not enough operands for '" << fig << "'\n";
                return 1;
            }
            // pop in correct order: b is top, a is below
            int b = stos.top(); stos.pop();
            int a = stos.top(); stos.pop();
            if(fig=='/' && b==0){
                cerr << "Error: division by zero\n";
                return 1;
            }
            if(fig=='+') stos.push(a + b);
            else if(fig=='-') stos.push(a - b);
            else if(fig=='*') stos.push(a * b);
            else if(fig=='/') stos.push(a / b);
        }
        // ignore unrecognised characters (spaces handled by cin>>)
    }

    if(stos.empty()){
        cerr << "Error: empty expression\n";
        return 1;
    }
    cout << stos.top() << endl;
    return 0;
}
