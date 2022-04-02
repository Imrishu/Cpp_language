/*

Instructions: You are required to write the code. You can click on compile and run anytime to check
compilation/execution status. The code should be logically/syntactically correct.

Question: Write a program in C such that it takes a lower limit and upper limit as inputs and print
all the intermediate palindrome numbers.

Test Cases:

TestCase 1:
Input :
10 , 80
Expected Result:
11 , 22 , 33 , 44 , 55 , 66 , 77.

Test Case 2:
Input:
100,200
Expected Result:
101 , 111 , 121 , 131 , 141 , 151 , 161 , 171 , 181 , 191.

*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int num)
{
    int dup = num, value = 0;
    while (dup != 0)
    {
        int rem = dup % 10;
        value = value * 10 + rem;
        dup /= 10;
    }
    if (value == num)
        return true;
    return false;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (isPalindrome(i))
            cout << i << " ";
    }
    return 0;
}