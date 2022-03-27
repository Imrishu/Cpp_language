#include <bits/stdc++.h>
using namespace std;

void stringReverse(string &str)         // call by refrence
{
    reverse(str.begin(), str.end());            // reverse str
}

int main()
{
    string str;
    cout << "enter the string" << endl;
    cin >> str;
    stringReverse(str);
    cout << str;
    return 0;
}