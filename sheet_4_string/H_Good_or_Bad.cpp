#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        string s;
        cin >> s;
        int flag = 0;

        int n = s.length();
        for (int i = 0; i < n - 2; i++)
        {
            /* code */
            if ((s[i] == '1' and s[i + 1] == '0' and s[i + 2] == '1') || (s[i] == '0' and s[i + 1] == '1' and s[i + 2] == '0'))
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}