#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;

    /* code */
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if (s[i] == '\\')
            break;

        cout << s[i];
    }

    return 0;
}
