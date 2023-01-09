#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstname, secondname, fullname;
    firstname = "Rohit";
    secondname = "Sharma";

    // string concatenation
    // fullname = firstname + " " + secondname;
    // cout << fullname;

    // Append
    // firstname.append(" " + secondname);
    // cout << firstname;

    // string a, b;
    // a = "10";
    // b = "20";

    // string c = a + b;
    // cout << c;

    string s1 = "Hello World!";
    // cout << "Length of above string is : " << s1.length();

    // char c;
    // c = s1[5 - 1];
    // cout << c;

    string s2 = "Hello \"Rajeev\" sir!!";
    string s3 = "Hello \"Rajeev\" sir!!";
    string s4 = "Hello 3\\8 sir!!";
    cout << s4;

    return 0;
}