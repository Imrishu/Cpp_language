#include <bits/stdc++.h>
using namespace std;

int secondSmallestElement(int arr[], int n)
{
    sort(arr, arr + n);
    return arr[1];
}

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << secondSmallestElement(arr, n);
    return 0;
}