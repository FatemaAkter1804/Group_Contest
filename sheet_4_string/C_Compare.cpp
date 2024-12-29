#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    // int ans=(lexicographical_compare(a,b));
    if (a > b)
    {
        cout << b << endl;
    }
    else
    {
        cout << a << endl;
    }

    return 0;
}