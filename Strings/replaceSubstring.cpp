#include <bits/stdc++.h>
using namespace std;

void substringReplace(string &str, string str1, string str2)
{
    str.replace(str.find(str1), str1.size(), str2);
}

int main()
{
    string str, str1, str2;
    cout << "1. enter the string" << endl
         << "2. enter the string to be replace" << endl
         << "enter the new substring" << endl;
    cin >> str >> str1 >> str2;
    substringReplace(str, str1, str2);
    cout << str;
    return 0;
}