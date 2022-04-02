/*

You are given a function.
int CheckPassword(char str[], int n);
The function accepts string str of size n as an argument. Implement the function which returns 1
if given string str is valid password else 0.
str is a valid password if it satisfies the below conditions.

– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number
Assumption:
Input string will not be empty.

Example:

Input:
aA1_67
Output:
1

Sample Input:
a987 abC012
Output:
0

*/

#include <bits/stdc++.h>
using namespace std;

int CheckPassword(char str[], int n)
{
    if (n < 4)
        return 0;
    if (str[0] >= '0' && str[0] <= '9')
        return 0;
    int numCount = 0, capCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            capCount++;
        else if (str[i] >= '0' && str[i] <= '9')
            numCount++;
        else if (str[i] == ' ' || str[i] == '/')
            return 0;
    }
    if (capCount >= 1 && numCount >= 1)
        return 1;
    return 1;
}

int main()
{
    char str[1000], n;
    gets(str);
    n = strlen(str);
    cout << CheckPassword(str, n);
    return 0;
}