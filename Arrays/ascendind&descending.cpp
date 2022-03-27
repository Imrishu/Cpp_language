#include <bits/stdc++.h>
using namespace std;

void ascending_descending(int arr[], int n)
{
    int mid = (0 + n - 1) / 2;
    sort(arr, arr + mid);
    sort(arr + (mid + 1), arr + n, greater<int>());
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ascending_descending(arr, n);
    print(arr, n);
    return 0;
}