#include <bits/stdc++.h>
using namespace std;

void symmetricPair(int arr1[], int arr2[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j] && arr1[j] == arr2[i])
                cout << arr1[i] << ", " << arr2[j] << endl;
        }
    }
}

int main()
{
    int arr1[20], arr2[20], n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int j = 0; j < m; j++)
        cin >> arr2[j];
    symmetricPair(arr1, arr2, n, m);
    return 0;
}