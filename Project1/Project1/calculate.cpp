#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double num1{ 0 }, num2{ 0 }, result{ 0 };
    cout << "������� ������ �����: ";
    cin >> num1;
    cout << "������� ������ �����: ";
    cin >> num2;
    char oper;
    cout << "������� �������� (+, -, *, /): ";
    cin >> oper;

    switch (oper) {
    case '+': 
        result = num1 + num2;
        cout << "��������� ��������: " << result << endl;
        break;
    case '-': 
        result = num1 - num2;
        cout << "��������� ���������: " << result << endl;
        break;
    case '*': 
        result = num1 * num2;
        cout << "��������� ���������: " << result << endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "��������� ���������: " << result << endl;
            break;
        } 
        else {
            cout << "������: ������� �� ����!" << endl;
        }
    }

    return 0;
}