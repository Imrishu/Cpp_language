#include <bits/stdc++.h>
using namespace std;

void firstLastCharCaps(string &str)
{
    str[0] = toupper(str[0]);
    str[str.length() - 1] = toupper(str[str.length() - 1]);
}

int main()
{
    string str;
    cout << "enter the string" << endl;
    cin >> str;
    firstLastCharCaps(str);
    cout << str;
    return 0;
}