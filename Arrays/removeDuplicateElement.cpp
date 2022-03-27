#include <bits/stdc++.h>
using namespace std;

void removeDuplicate(int arr[], int *n)
{
    for (int i = 0; i < *n; i++)
    {
        for (int j = i + 1; j < *n; j++)
        {
            if (arr[i] == arr[j])
            {
                while (j < *n)
                {
                    arr[j] = arr[j + 1];
                    j++;
                }
                --*n;
            }
            else
                continue;
        }
    }
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
    removeDuplicate(arr, &n);
    print(arr, n);
    return 0;
}
