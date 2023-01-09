#include <iostream>
using namespace std;
int main()
{

    // conditional statements
    // if statement
    // else statement
    // else if

    int a, b;
    a = 10;
    b = 10;

    if (a < b)
    {
        cout << a << " is smaller than " << b << endl;
    }
    else if (a == b)
    {
        cout << "Both are equal";
    }

    else
    {
        cout << b << " is smaller than " << a << endl;
    }
    return 0;
}