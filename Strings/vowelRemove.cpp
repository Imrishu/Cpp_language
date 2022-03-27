#include <bits/stdc++.h>
using namespace std;

void vowelRemover(string &str)    // call by refrence
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            int j;
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];        // deleting vowel by left shifting the string
            }
            str[j] = '\0';     // making last vacant string null after deleting vowel
            i--;            // decreasing i value 
        }
    }
}

int main()
{
    string str;
    cout << "enter the string" << endl;
    cin >> str;
    vowelRemover(str);
    cout << str;
    return 0;
}