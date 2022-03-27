/*
    For an integer N find the number of trailing zroes in N!
    example 1:
        input : N = 5
        output : 1
        5! = 120 so the number of trailing zeroes is   
*/

#include <bits/stdc++.h>
using namespace std;

int trailingZeroes(int N)
{
    int count = 0;
    for (int i = 5; i <= N; i = i * 5)
        count += N / i;
    return count;
}

int main()
{
    int N;
    cin >> N;
    int val = trailingZeroes(N);
    cout << val;
    return 0;
}