#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)      // call by value
{           
    string str1 = str;                              // copying str in str1
    reverse(str1.begin(), str1.end());              // reverse str1
    if (str1 == str)                                // if reversed str1 is equal to str then its palindrome
        return true;
    return false;
}

int main()
{
    string str;
    cout << "enter the string" << endl;
    cin >> str;
    if (isPalindrome(str))
        cout << "the string is Palindrome" << endl;
    else
        cout << "not a Palindrome" << endl;
    return 0;
}
