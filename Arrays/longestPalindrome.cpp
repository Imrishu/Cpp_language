#include <bits/stdc++.h>
using namespace std;

int longestPlaindrome(int arr[], int n)
{
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int rev = 0;
        while (num)
        {
            int temp = num % 10;
            rev = rev * 10 + temp;
            num /= 10;
        }
        if (arr[i] == rev)
            return arr[i];
    }
    return -1;
}

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << longestPlaindrome(arr, n);
    return 0;
}
