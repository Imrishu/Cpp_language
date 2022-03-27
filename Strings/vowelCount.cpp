#include <bits/stdc++.h>
using namespace std;

int vowelCount(string str)     // call by value
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
            count++;
    }
    return count;
}

int main()
{
    string str;
    cout << "enter the string" << endl;
    cin >> str;
    int count = vowelCount(str);
    cout << "number of vowel in " << str << " is : " << count << endl;
    return 0;
}