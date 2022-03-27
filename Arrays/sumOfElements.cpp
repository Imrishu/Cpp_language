#include <bits/stdc++.h>
using namespace std;

int sumOfElement(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << sumOfElement(arr, n);
    return 0;
}
