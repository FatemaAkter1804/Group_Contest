// // #include <bits/stdc++.h>
// // #define ll long long
// // using namespace std;

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     string s;
// //     cin >> s;
// //     bool flag = true;
// //     int n = s.length();
// //     for (int i = 0; i < n / 2; i++)
// //     {
// //         /* code */
// //         if (s[i] != s[n - i - 1])
// //         {
// //             flag = false;
// //             break;
// //         }
// //     }

// //     if (flag)
// //     {
// //         cout << "YES" << endl;
// //     }
// //     else
// //     {
// //         cout << "NO" << endl;
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
//     int n = s.length();
//     bool flag = true;
//     for (int i = 0; i < n / 2; i++)
//     {
//         /* code */
//         if (s[i] != s[n - i - 1])
//         {
//             flag = false;
//             break;
//         }
//     }
//     if (flag)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
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
    int n = s.length();
    bool flag = true;
    for (int i = 0; i < n / 2; i++)
    {
        /* code */
        if (s[i] != s[n - i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}