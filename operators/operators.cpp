#include <iostream>
using namespace std;
int main()
{

    // operators in c++

    // Arithmetic op
    // assignment op
    // comarison
    // logical
    // bitwise

    // Arithmetic op
    double a, b, add, sub, mult;
    double div;
    cout << "Enter value of A & b : " << endl;
    // cin >> a >> b;

    add = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b; // it will only integer value

    int num1, num2, ans2;
    num1 = 7;
    num2 = 4;

    // modulus operator
    ans2 = num1 % num2;
    cout << ans2;

    cout << "Sum of " << a << " & " << b << " is : " << add << endl;
    cout << "Sub of " << a << " & " << b << " is : " << sub << endl;
    cout << "Mult of " << a << " & " << b << " is : " << mult << endl;
    cout << "Div of " << a << " & " << b << " is : " << div << endl;

    return 0;
}