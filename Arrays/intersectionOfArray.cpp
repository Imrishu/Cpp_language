#include <bits/stdc++.h>
using namespace std;

// int intersectionOfArrayElement(int a[], int b[], int n, int m)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i] == b[j])
//                 count++;
//         }
//     }
//     return count;
// }

int intersectionOfArrayElement(int a[], int b[], int n, int m)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        int key = b[i];
        if (s.find(key) != s.end())
        {
            count++;
            s.erase(key);
        }
    }
    return count;
}

int main()
{
    int a[20], b[20], n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    cout << intersectionOfArrayElement(a, b, n, m) << endl;
    return 0;
}
