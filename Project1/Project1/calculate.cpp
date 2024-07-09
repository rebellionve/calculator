#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double num1{ 0 }, num2{ 0 }, result{ 0 };
    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;
    char oper;
    cout << "Введите оператор (+, -, *, /): ";
    cin >> oper;

    switch (oper) {
    case '+': 
        result = num1 + num2;
        cout << "Результат сложения: " << result << endl;
        break;
    case '-': 
        result = num1 - num2;
        cout << "Результат вычитания: " << result << endl;
        break;
    case '*': 
        result = num1 * num2;
        cout << "Результат умножения: " << result << endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Результат умножения: " << result << endl;
            break;
        } 
        else {
            cout << "Ошибка: деление на ноль!" << endl;
        }
    }

    return 0;
}