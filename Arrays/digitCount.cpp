#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    unordered_map<int, int> s;
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        s[key]++;
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}