// // #include <bits/stdc++.h>
// // #define ll long long
// // using namespace std;

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     string s;
// //     cin >> s;
// //     //    set<string>a;
// //     vector<int> cnt(26, 0);
// //     for (char c : s)
// //     {
// //         cnt[c - 'a']++;
// //     }
// //     for (int i = 0; i < 26; i++)
// //     {
// //         /* code */
// //         if (cnt[i] > 0)
// //         {
// //             cout << char('a' + i) << " : " << cnt[i] << endl;
// //         }
// //     }

// //     return 0;
// // }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     string s;
//     cin >> s;
//     vector<int> cnt{26, 0};
//     for (auto c : s)
//     {
//         cnt[c - 'a']++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         /* code */
//         if (cnt[i] > 0)
//         {
//             cout << char('a' + i) << " : " << cnt[i] << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     string s;
//     cin >> s;
//     vector<int> cnt{26, 0};
//     for (auto c : s)
//     {
//         cnt[c - 'a']++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         /* code */
//         if (cnt[i] > 0)
//         {
//             cout << char('a' + i) << " : " << cnt[i] << endl;
//         }
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     string s;
//     cin >> s;
//     vector<int> cnt{26, 0};
//     for (auto c : s)
//     {
//         cnt[c - 'a']++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         /* code */
//         if (cnt[i] > 0)
//         {
//             cout << char('a' + i) << " : " << cnt[i] << endl;
//         }
//     }

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
    sort(s.begin(), s.end());
    int n = s.length();

    char x = s[0];
    int flag = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == x)
        {
            flag++;
        }
        else
        {
            cout << x << " : " << flag << endl;
            x = s[i];
            flag = 1;
        }
    }

    cout << x << " : " << flag << endl;

    return 0;
}
