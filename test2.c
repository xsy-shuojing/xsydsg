#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;//输入数字
    char op;//输入+-*/运算符号

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (op)//开关语句，判断所输入的符号
    {
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << endl;
        break;
    case '/':
        if (num2 == 0)    //判断除数是否为0
        {
            cout << "Error: division by zero" << endl;
            break;
        }
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result << endl;
        break;
    default:
        cout << "Error: invalid operator " << op << endl;
        break;
    }

    return 0;


}