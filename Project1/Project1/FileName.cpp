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



//�������������� ������
/*                                                                              ����� 1
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
/*                                                                               ����� 2
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