#include <bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n, int a)
{
    if (a)
        sort(arr, arr + n);
    else
        sort(arr, arr + n, greater<int>());
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int arr[20], n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "enter 1 for ascending order or 0 for descending order" << endl;
    cin >> a;
    sortArray(arr, n, a);
    print(arr, n);
    return 0;
}