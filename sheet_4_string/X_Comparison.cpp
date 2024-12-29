#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (s.length() != 0)
    {
        cout << s << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}