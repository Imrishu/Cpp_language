/*

Autobiographical Number

Problem Statement :

An Autobiographical Number is a number N such that the first digit of N represents the count of
how many zeroes are there in N, the second digit represents the count of how many ones are there
in N and so on.

You are given a function, def FindAutoCount(n):

The function accepts string “n” which is a number and checks whether the number is an autobiographical
number or not. If it is, an integer is returned, i.e. the count of distinct numbers in ‘n’. If not, it
returns 0.

Assumption:

The input string will not be longer than 10 characters.
Input string will consist of numeric characters.
Note:

If string is None return 0.

Example:

Input:

n: “1210”

Output:

3

Explanation:

0th position in the input contains the number of 0 present in input, i.e. 1, in 1st position the count
of number of 1s in input i.e. 2, in 2nd position the count of 2s in input i.e. 1, and in 3rd position the
count of 3s i.e. 0, so the number is an autobiographical number.

Now unique numbers in the input are 0, 1, 2, so the count of unique numbers is 3. So 3 is returned.

*/

#include <bits/stdc++.h>
using namespace std;

int FindAutoCount(string str)
{
    if (str[0] = '\0')
        return 0;
    int sum = 0;
    vector<int> numbers;
    for (int i = 0; i < str.size(); i++)
    {
        numbers.push_back(str[i] - '0');
    }
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] > 0)
            sum += i;
    }
    return sum;
}

int main()
{
    string str;
    cin >> str;
    cout << FindAutoCount(str);
    return 0;
}