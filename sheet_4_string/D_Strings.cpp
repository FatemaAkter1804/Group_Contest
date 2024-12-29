#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    cout << a.length() << " " << b.length() << endl;
    cout << a << b << endl;
    // string last = a + b;
    // // cout << last << endl;
    // int n = last.length();
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout << last[i + 1] << last[n - 1] << " " << last[i] << last[n] << endl;
    // }
    char tmp = a[0], tmb = b[0];
    a[0] = tmb;
    b[0] = tmp;
    cout << a << " " << b << endl;

    return 0;
}