// // #include <bits/stdc++.h>
// // #define ll long long
// // using namespace std;

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         /* code */
// //         string s, t;
// //         cin >> s >> t;
// //         int tmp, tmp2;
// //         int n = s.length();
// //         int m = t.length();
// //         if (n < m)
// //         {
// //             tmp = n;
// //             tmp2 = m;
// //         }
// //         else
// //         {
// //             tmp = m;
// //             tmp2 = n;
// //         }
// //         if (n == m)
// //         {
// //             tmp = n;
// //             for (int i = 0; i < tmp; i++)
// //             {
// //                 /* code */
// //                 cout << s[i] << t[i];
// //             }
// //         }
// //         if (n != m)
// //         {
// //             if (n < m)
// //             {
// //                 for (int i = 0; i < tmp1; i++)
// //                 {
// //                     /* code */
// //                     cout << s[i];
// //                 }
// //             }
// //         }
// //         else
// //         {
// //             for (int i = 0; i < tmp2; i++)
// //             {
// //                 /* code */
// //                 cout << t[i];
// //             }
// //         }
// //         cout << endl;
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

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s, t;
//         cin >> s >> t;

//         int n = s.length();
//         int m = t.length();
//         int minLen = min(n, m);
//         int maxLen = max(n, m);

//         for (int i = 0; i < minLen; i++)
//         {
//             cout << s[i] << t[i];
//         }

//         if (n > m)
//         {
//             cout << s.substr(minLen);
//         }
//         else if (m > n)
//         {
//             cout << t.substr(minLen);
//         }

//         cout << endl;
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
    int z;
    cin >> z;
    while (z--)
    {
        /* code */
        string s, t;
        cin >> s >> t;
        int n = s.length();
        int m = t.length();
        int minLen = min(n, m);
        int maxLen = max(n, m);
        for (int i = 0; i < minLen; i++)
        {
            /* code */
            cout << s[i] << t[i];
        }
        if (n > m)
        {
            cout << s.substr(minLen);
        }
        // if (m > n)
        // {
        //     cout << t.substr(minLen);
        // }
        else
        {
            cout << t.substr(minLen);
        }
        cout << endl;
    }

    return 0;
}