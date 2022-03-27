#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[10][10][10], B[10][10][10];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cin >> A[i][j][k];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cin >> B[i][j][k];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                if (A[i][j][k] != B[i][j][k])
                {
                    cout << "not equal";
                    break;
                }
                else
                    cout << A[i][j][k] << " ";
            }
        }
    }
    return 0;
}