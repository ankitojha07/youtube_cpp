#include <iostream>
using namespace std;
int main()
{
    // break & continue
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }

    // break
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}