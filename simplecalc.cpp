#include<iostream>

using namespace std;

int main() {
    
    int a;
    cout << "Enter the value of a " << endl;
    cin >> a;

    int b;
    cout << "Enter the value of b " << endl;
    cin >> b;

    char op;
    cout << "Enter the operation to perform :- " << endl;
    cin >> op;

    // ! Mini Calculator

    switch(op) {
        case '+' : cout << a + b << endl;
        break;

        case '-' : cout << a - b << endl;
        break;

        case '*' : cout << a * b << endl;
        break;

        case '/' : cout << a / b << endl;
        break;

        case '%' : cout << a % b << endl;
        break;

        default : 
        cout << "Calculator sucks";
    }
}