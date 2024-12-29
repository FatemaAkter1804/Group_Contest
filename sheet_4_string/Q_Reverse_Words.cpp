// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     string s;
//     getline(cin, s);
//     stringstream ss(s);
//     string wrnd, res;
//     while (ss >> wrnd)
//     {
//         /* code */
//         reverse(wrnd.begin(), wrnd.end());
//         res += wrnd + " ";
//     }
//     res.pop_back();
//     cout << res << endl;

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string wrnd, res;
    while (ss >> wrnd)
    {
        /* code */
        reverse(wrnd.begin(), wrnd.end());
        res += wrnd + " ";
    }
    res.pop_back();
    cout << res << endl;

    return 0;
}