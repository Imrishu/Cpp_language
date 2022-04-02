/*

You are required to implement the following Function

def LargeSmallSum(arr)

The function accepts an integers arr of size ’length’ as its arguments you are required to return
the sum of second largest  element from the even positions and second smallest from the odd position
of given ‘arr’

Assumption:

All array elements are unique
Treat the 0th position as even
NOTE

Return 0 if array is empty
Return 0, if array length is 3 or less than 3
Example

Input

arr:3 2 1 7 5 4

Output

7

Explanation

Second largest among even position elements(1 3 5) is 3
Second smallest among odd position element is 4
Thus output is 3+4 = 7
Sample Input

arr:1 8 0 2 3 5 6

Sample Output

8

*/

#include <bits/stdc++.h>
using namespace std;

int LargeSmallSum(int arr[], int length)
{
    vector<int> odd, even;
    even.push_back(arr[0]);
    for (int i = 1; i < length; i++)
    {
        if (i % 2 == 0)
        {
            even.push_back(arr[i]);
        }
        else
            odd.push_back(arr[i]);
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end(), greater<int>());
    int sum = odd[1] + even[1];
    return sum;
}

int main()
{
    int arr[1000], length;
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> arr[i];
    cout << LargeSmallSum(arr, length);
    return 0;
}