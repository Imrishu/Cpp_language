#include <bits/stdc++.h>
using namespace std;

void nonRepeater(char str[], int freq[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }
}

int main()
{
    char str[100];
    int freq[256] = {0};
    cout << "enter the string" << endl;
    gets(str);
    nonRepeater(str, freq);
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] == 1)
            cout << char(i) << "   " << freq[i] << endl;
    }
    return 0;
}