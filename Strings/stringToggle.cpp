#include <bits/stdc++.h>
using namespace std;

void toggle(string &str)    // call by refrence
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
}

int main()
{
    string str;
    cout << "enter the string" << endl;
    cin >> str;
    toggle(str);
    cout << str;
    return 0;
}