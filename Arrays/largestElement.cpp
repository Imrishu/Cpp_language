#include <bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n)
{
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[max])
            max = i;
    }
    return arr[max];
}

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << largestElement(arr, n);
    return 0;
}