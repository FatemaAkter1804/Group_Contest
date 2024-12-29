// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s;

//     string target = "hello";
//     int j = 0;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == target[j])
//         {
//             j++;
//         }
//         if (j == target.length())
//         {
//             cout << "YES" << endl;
//             return 0;
//         }
//     }

//     cout << "NO" << endl;
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
    cin >> s;
    string target = "Hello";
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s[i] == target[cnt])
        {
            cnt++;
        }
        if (cnt == target.length())
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}