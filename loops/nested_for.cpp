#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = i; j <= 10 - i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}