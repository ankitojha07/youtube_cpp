#include <iostream>
using namespace std;
int main()
{
    int a, b;
    a = 10;
    b = 16;

    // logical OR ||
    if (a > b || a > 9)
    {
        cout << "Done";
    }

    // logical AND
    if (a > b && a > 9)
    {
        cout << "Its okay!!";
    }

    // logical not
    if (!(a > b && a > 9))
    {
        cout << "Its done!!";
    }

    return 0;
}