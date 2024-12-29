#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "http://www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager";
    bool str = false;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        /* code */
        if ((s[i] == '?' || s[i] == '&') && !str)
        {
            str = true;
            continue;
        }
        if (str)
        {
            if (s[i] != '=' && s[i] != '&')
            {
                cout << s[i];
            }
            else if (s[i] == '#')
            {
                cout << ": ";
            }
            else if (s[i] == '&')
            {
                cout << endl;
            }
        }
    }

    return 0;
}