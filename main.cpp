#include <iostream>
using namespace std;
int main() {
    double num1;
    double num2;
    char op;
    cout<<"###### Simple Calculator Program ######"<<endl;
    cout <<"Type first number: ";
    cin >> num1;
    cout <<"Enter only '*, /, -, +':";
    cin >> op;
    cout <<"Enter second number: ";
    cin >> num2;
    switch(op) {
        case '+':
            cout << num1 + num2;
        break;

        case '-':
            cout << num1 - num2;
        break;
        case '*':
            cout << num1 * num2;
        break;
        case '/':
            cout << num1 / num2;
        break;
        default:
            cout<<"Wrong Input" <<endl;
    }
}

