#include <iostream>
using namespace std;
int main()
{
    // switch statements
    int a, b;
    char op;
    cout << "Enter value of A :" << endl;
    cin >> a;
    cout << "Enter the operator : ";
    cin >> op;
    cout << "Enter the value of b : " << endl;
    cin >> b;

    switch (op)
    {
    case '+':
        cout << "Addition is : " << (a + b);
        break;
    case '-':
        cout << "Substractions is : " << (a - b);
        break;
    case '*':
        cout << "Multiplication is : " << (a * b);
        break;
    case '/':
        cout << "Division is : " << (a / b);
        break;

    default:
        cout << "Please choose any operation from +, - , * , /";
        break;
    }
    return 0;
}