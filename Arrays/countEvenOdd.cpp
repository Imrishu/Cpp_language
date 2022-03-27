#include <bits/stdc++.h>
using namespace std;

void countOddEven(int arr[], int n, int *odd, int *even)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            *even += 1;
        else
            *odd += 1;
    }
}

int main()
{
    int arr[20], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int odd = 0, even = 0;
    countOddEven(arr, n, &odd, &even);
    cout << "even count : " << even << endl
         << "odd count : " << odd;
    return 0;
}