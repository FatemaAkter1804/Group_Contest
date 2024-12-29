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
//     string wrnd;
//     int cnt = 0;
//     while (ss >> wrnd)
//     {
//         /* code */
//         cnt++;
//         if (wrnd == "...")
//         {
//             continue;
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

    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (!isalpha(s[i]) && s[i] != ' ')
        {
            s[i] = ' ';
        }
    }

    stringstream ss(s);
    string word;
    int cnt = 0;

    while (ss >> word)
    {
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}
