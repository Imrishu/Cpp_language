#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    cout << "smallest element is : " << arr[0] << endl;
    cout << "largest element is : " << arr[n - 1];
    return 0;
}