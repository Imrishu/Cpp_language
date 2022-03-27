#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = 1;
                count++;
            }
        }
        if (count > 1)
            cout << arr[i] << " ";
    }
}

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    frequency(arr, n);
    return 0;
}