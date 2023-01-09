#include <iostream>

// declarative region that provide scope to identifiers
using namespace std;
// using std::cout;

int main()
{
    // :: is sign for scope
    // cout << "Hello world!" << endl;

    // var in c++

    int var_name = 9;
    double b = 9.3;

    // cout << var_name << " " << b;
    // cout << " \n";

    char c = 'A';
    // cout << c << endl;

    string s = "Text is here";
    // cout << s << endl;

    bool bool_val = true;
    bool bool_val2 = false;

    // no special char except underscore (_)
    // cannot start with numeric value

    int n_3 = 7;
    int n2 = 8;

    cout << bool_val << " " << bool_val2;

    return 0;
}