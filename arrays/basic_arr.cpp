#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Arrays in c++
    int arr[4] = {1, 5, 9, 0};
    // for (int i = 0; i < 4; i = i + 2)
    // {
    //     cout << arr[i] << endl;
    // }

    char arr2[4] = {'a', 'b', 'd', 'f'};

    string arr3[] = {"name1", "name2", "name3", "name4 "};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << arr3[i] << endl;
    // }

    string arr4[] = {"name1", "name2", "name3"};
    // cout << arr4[3 - 1];

    int arr5[] = {1, 5, 9, 0};
    cout << "Size of array : " << sizeof(arr5) << endl;

    int length = sizeof(arr5) / sizeof(int);
    cout << "Length of array : " << length << endl;

    int length2 = sizeof(arr4) / sizeof(string);
    cout << "Length of array 4 : " << length2;

    return 0;
}