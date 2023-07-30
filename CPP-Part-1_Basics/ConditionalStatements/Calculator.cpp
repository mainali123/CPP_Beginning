//
// Created by diwash on 24/07/2023.
//

#include <iostream>

using namespace std;

int main() {
    int a, b;
    char operator_;

    cout << "Enter the numbers: " << endl;
    cin >> a >> b;
    cout << "What operation you want to perform (+, -, *, / , %)? " << endl;
    cin >> operator_;

    switch (operator_) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        case '%':
            cout << a % b << endl;
            break;
        default:
            cout << "Invalid Operator" << endl;
            break;
    }
    return 0;
}