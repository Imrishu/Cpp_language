/*
    given an array of size N-1 such that it only contains distinct integers in 
    the range of 1 to N. Find the missing element.
    example 1:
        input : N = 5
                A[] = {1,2,3,5}
        Output : 4
    example 2:
        input : N = 10
                A[] = {6,1,2,8,3,4,7,10,5}
        Output : 9
*/

#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int N)
{
    int sum = 0, sum1;
    for (int i = 0; i < N - 1; i++)
        sum += arr[i];
    sum1 = (N * (N + 1)) / 2;
    return sum1 - sum;
}

int main()
{
    int arr[100], N;
    cin >> N;
    for (int i = 0; i < N - 1; i++)
        cin >> arr[i];
    int val = missingNumber(arr, N);
    cout << val;
    return 0;
}