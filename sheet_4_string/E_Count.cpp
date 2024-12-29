#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int total_sum = 0;
    for (auto ch : s)
    {
        total_sum += ch - '0';
        // total_sum+=stoi(ch);
    }
    cout << total_sum << endl;

    return 0;
}
