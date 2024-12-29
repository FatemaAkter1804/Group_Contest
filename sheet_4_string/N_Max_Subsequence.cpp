// // #include <bits/stdc++.h>
// // #define ll long long
// // using namespace std;

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int n;
// //     cin >> n;
// //     char s[n];
// //     cin >> s;
// //     char temp;
// //     int cnt = 0;
// //     for (int i = 0; i < n; i++)
// //     {
// //         /* code */
// //         if (i == 0)
// //         {
// //             temp = s[i];
// //             cnt++;
// //         }
// //         else
// //         {
// //             if (s[i] != temp)
// //             {
// //                 cnt++;
// //                 temp = s[i];
// //             }
// //         }
// //     }
// //     cout << cnt << endl;

// //     return 0;
// // }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     char s[n];
//     cin >> s;
//     char temp;
//     int cnt = 0;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         if (i == 0)
//         {
//             temp = s[i];
//             cnt++;
//         }
//         else
//         {
//             if (s[i] != temp)
//             {
//                 cnt++;
//                 temp = s[i];
//             }
//         }
//     }
//     cout << cnt << endl;

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    char temp = s[0];
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if (s[i] != temp)
        {
            cnt++;
            temp = s[i];
        }
    }

    cout << cnt << endl;
    return 0;
}