/*
If two strings have same frequency of  characters and only the order of characters is different 
then such strings are said to be anagram.
listen <----> silent
*/

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string str1, string str2)      // call by value
{
    int len1 = str1.length();       // found the length of str1
    int len2 = str2.length();       // found the length of str2
    if (len1 != len2)               // if length if both strings are not same then return false
        return false;
    sort(str1.begin(), str1.end());         // sort the str1 according to disctionary order
    sort(str2.begin(), str2.end());         // sort the str2 according to disctionary order
    for (int i = 0; i < len1; i++)
    {
        if (str1[i] != str2[i])             // if any of the letter does not match then return false
            return false;
    }
    return true;                            // otherwise return true
}

int main()
{
    string str1, str2;
    cout << "enter the string1 and string2" << endl;
    cin >> str1 >> str2;
    if (isAnagram(str1, str2))
        cout << "the strings are Anagram" << endl;
    else
        cout << "the strings are not Anagram" << endl;
    return 0;
}
