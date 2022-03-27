#include <bits/stdc++.h>
using namespace std;

void spaceRemover(char str[])               // call by refrence
{
    int j;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
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
    char str[100];                      
    cout << "enter the string" << endl;
    gets(str);                          // cin does not allow space strings 
    spaceRemover(str);
    cout << str;
    return 0;
}