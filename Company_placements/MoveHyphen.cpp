/*

Implement the following functions.a

char*MoveHyphen(char str[],int n);

The function accepts a string “str” of length ‘n’, that contains alphabets and hyphens (-). Implement the
function to move all hyphens(-) in the string to the front of the given string.

NOTE:- Return null if str is null.

Example :-

Input:
str: Move-Hyphens-to-Front
Output:
—MoveHyphenstoFront
Explanation:-

The string “Move-Hyphens -to-front” has 3 hyphens (-), which are moved to the front of the string, this output
is “— MoveHyphen”

Sample Input

Str: String-Compare
Sample Output-

-StringCompare


*/

#include <bits/stdc++.h>
using namespace std;

string MoveHyphen(string str, int n)
{
    if (str[0] == '\0')
        return NULL;
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '-')
        {
            str.erase(str.begin() + i); //       str.erase(i, 1);
            count++;
        }
    }
    while (count--)
        str = '-' + str;
    return str;
}

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    cout << MoveHyphen(str, n);
    return 0;
}