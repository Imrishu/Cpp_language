#include <bits/stdc++.h>
using namespace std;

void stringRemoveNonAlphaChar(string &str)   // call by refrence
{
    int j;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            continue;                               // ignore if alphabet is encountered
        else
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];                // left shift if non alphabet character is there
            }
        str[j] = '\0';
        i--;
    }
}

int main()
{
    string str;
    cout << "enter the string" << endl;
    cin >> str;
    stringRemoveNonAlphaChar(str);
    cout << str;
    return 0;
}
