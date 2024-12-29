#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ',')
        {
            cout << " ";
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cout << char(s[i] + 32);
        }
        // if (s[i] >= 'a' && s[i] <= 'z')
        else
        {
            cout << char(s[i] - 32);
        }
        // else
        // {
        //     cout << s[i];
        // }
    }

    cout << endl;
    return 0;
}
