#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double num1{ 0 }, num2{ 0 }, result{ 0 };
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    char oper;
    cout << "Enter operator (+, -, *, /): ";
    cin >> oper;

    switch (oper) {
    case '+': 
        result = num1 + num2;
        cout << "addition result: " << result << endl;
        break;
    case '-': 
        result = num1 - num2;
        cout << "subtraction result: " << result << endl;
        break;
    case '*': 
        result = num1 * num2;
        cout << "multiplication result: " << result << endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "division result: " << result << endl;
            break;
        } 
        else {
            cout << "Error: division by zero!" << endl;
        }
    }

    return 0;
}
