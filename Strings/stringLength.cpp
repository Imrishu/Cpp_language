#include <bits/stdc++.h>
using namespace std;

int stringLength(string str)      // call by value
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    string str;
    cout << "enter the string" << endl;
    cin >> str;
    int length = stringLength(str);
    cout << "the length of the string " << str << " is : " << length << endl;
    return 0;
}