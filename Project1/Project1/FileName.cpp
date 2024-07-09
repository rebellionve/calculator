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



//Арифметические задачи
/*                                                                              Номер 1
#include <iostream>

int main()
{
    const int m_in_km{ 1000 };

    int meters;
    std::cout << "enter meters: ";
    std::cin >> meters;

    int kilometers{ meters / m_in_km };
    int remain_meters{ meters % m_in_km };
    std::cout << kilometers << " km " << remain_meters << " m" << std::endl;

    return 0;
}
*/
/*                                                                               Номер 2
#include <iostream>
using namespace std;

int main()
{
    const double pi = 3.14159;

    double radius;
    cout << "Enter circle radius: ";
    cin >> radius;
    double square{ pi * (radius * radius) };
    cout << "square_of_circle: " << square << endl;

    return 0;
}*/