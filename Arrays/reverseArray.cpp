#include <bits/stdc++.h>
using namespace std;

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
    cout << "before reverse the array is : ";
    print(arr, n);
    reverse(arr, arr + n);
    cout << "after reverse the array is : ";
    print(arr, n);
    return 0;
}