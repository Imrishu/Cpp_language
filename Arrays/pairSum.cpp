#include <bits/stdc++.h>
using namespace std;

bool pairSum(int arr[], int n, int X)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        if (s.find(X - key) != s.end())
            return true;
    }
    return false;
}

int main()
{
    int arr[20], n, X;
    cin >> n >> X;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << pairSum(arr, n, X);
    return 0;
}