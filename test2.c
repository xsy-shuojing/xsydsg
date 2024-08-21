#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (op)
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
        if (num2 == 0)    //ÅÐ¶Ï³ýÊýÊÇ·ñÎª0
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