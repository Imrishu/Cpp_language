#include <bits/stdc++.h>
using namespace std;

void charfreq(const char str[], int Freq[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        Freq[str[i]]++;
    }
}

int main()
{
    char str[100];
    int freq[256] = {0};
    cout << "enter the string" << endl;
    gets(str);
    charfreq(str, freq);
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            cout << "the freq of " << char(i) << " is " << freq[i] << endl;
        }
    }
    return 0;
}