#include <bits/stdc++.h>
using namespace std;

int firstRepeatingElement(int arr[], int n)
{
    unordered_map<int, int> s;
    for (int i = 0; i < n; i++)
        s[arr[i]]++;
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        auto temp = s.find(key);
        if (temp->second > 1)
            return i + 1;
    }
    return -1;
}

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << firstRepeatingElement(arr, n) << endl;
    return 0;
}