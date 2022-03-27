// need optimaisation and understanding of the concept of this question

#include <bits/stdc++.h>
using namespace std;

bool isStringMatch(char str[], char str1[])
{
    if (*str1 == '\0' && *str == '\0')
        return true;
    if (*str1 == '*' && *(str + 1) != '\0' && *str == '\0')
        return false;
    if (*str1 == '?' || *str1 == *str)
        return isStringMatch(str + 1, str1 + 1);
    if (*str1 == '*')
        return isStringMatch(str, str1 + 1);
    return false;
}

int main()
{
    char str[100], wild[100];
    cout << "enter the string1" << endl;
    gets(str);
    cout << "enter the string2 with some wildcard characters" << endl;
    gets(wild);
    if (isStringMatch(str, wild))
        cout << "the strings are matching" << endl;
    else
        cout << "the strings are not matching" << endl;
    return 0;
}