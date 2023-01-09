#include <iostream>
using namespace std;
int main()
{

    // while loop
    bool x = true;
    int y = 10;
    while (x)
    {
        int a = 5;
        if (y / a == 2)
        {
            cout << " Performing";
            x = false;
        }
        else
        {
            cout << "Not equal!" << endl;
        }
    }

    return 0;
}