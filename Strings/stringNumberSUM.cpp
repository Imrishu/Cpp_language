#include <bits/stdc++.h>
using namespace std;

int stringNumberSUM(char str[])
{
    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            sum += (str[i] - '0');
        }
    }
    return sum;
}

int main()
{
    char str[100];
    cout << "enter the numeric string" << endl;
    gets(str);
    int sum = stringNumberSUM(str);
    cout << sum;
    return 0;
}