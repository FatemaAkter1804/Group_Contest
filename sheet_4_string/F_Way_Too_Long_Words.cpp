#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        string s;
        cin >> s;
        int t = s.length();

        if (t > 10)
        {
            cout << s[0] << t - 2 << s[t - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
        // }
    }

    return 0;
}