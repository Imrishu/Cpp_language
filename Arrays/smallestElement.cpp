#include <bits/stdc++.h>
using namespace std;

int smallestElement(int arr[], int n)
{
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[min])
            min = i;
    }
    return arr[min];
}

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << smallestElement(arr, n);
    return 0;
}