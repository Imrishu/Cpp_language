#include <bits/stdc++.h>
using namespace std;

void bracketRemover(string &str)    // call by value
{
    int i, j;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '[' || str[i] == ']')
        {
            for (j = i; str[j] != '\0'; j++)
                str[j] = str[j + 1];
            str[j] = '\0';
            i--;
        }
    }
}

int main()
{
    string str;
    cout << "enter the algebraic expression" << endl;
    cin >> str;
    bracketRemover(str);
    cout << str;
    return 0;
}