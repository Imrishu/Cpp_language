#include <bits/stdc++.h>
using namespace std;

int nonRepeatingElement(int arr[], int n)
{
    unordered_map<int, int> s;
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        s[key]++;
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (it->second == 1)
            return it->first;
    }
    return 0;
}

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << nonRepeatingElement(arr, n) << endl;
    return 0;
}