// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (s[j] > s[j + 1])
//             {

//                 char temp = s[j];
//                 s[j] = s[j + 1];
//                 s[j + 1] = temp;
//             }
//         }
//     }

//     cout << s << endl;
//     return 0;
// }
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;

//     for (int i = 0; i < n - 1; i++)
//     {
//         /* code */
//         for (int j = 0; j < n - i - 1; i++)
//         {
//             /* code */
//             if (s[j] > s[j + 1])
//             {
//                 char temp = s[j];
//                 s[j] = s[j + 1];
//                 s[j + 1] = temp;
//             }
//         }
//     }

//     cout << s << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n;
//     cin >> n;
//     string s;
//     cin >> s;
//     sort(s.begin(), s.end());
//     cout << s << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int MAX_CHAR = 26;

// void sortString(string &s)
// {

//     int charCount[MAX_CHAR] = {0};

//     for (int i = 0; i < s.length(); i++)
//     {

//         charCount[s[i] - 'a']++;
//     }

//     for (int i = 0; i < MAX_CHAR; i++)
//     {
//         for (int j = 0; j < charCount[i]; j++)
//         {
//             cout << (char)('a' + i);
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     sortString(s);
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;
//     string S;
//     cin >> S;

//     vector<int> count(26, 0);

//     for (int i = 0; i < N; i++)
//     {
//         count[S[i] - 'a']++;
//     }

//     string sortedString = "";
//     for (int i = 0; i < 26; i++)
//     {
//         while (count[i] > 0)
//         {
//             sortedString += (char)(i + 'a');
//             count[i]--;
//         }
//     }

//     cout << sortedString << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int freq_array[130]={0};
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         char ch;
//         cin>>ch;
//         freq_array[ch]++;
//     }
//     for (char  ch = 'a'; ch <= 'z'; ch++)
//     {
//         /* code */
//         if(freq_array[ch]>=1)
//         {
//             for (int i = 0; i < freq_array[ch]; i++)
//             {
//                 /* code */
//                 cout<<ch;
//             }

//         }
//     }
//     int t=1;
//     cin>>t;
//     while (t--)
//     {
//         /* code */
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

//     int freq_array[130] = {0};
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         char ch;
//         cin >> ch;
//         freq_array[ch]++;
//     }

//     for (char ch = 'a'; ch <= 'z'; ch++)
//     {
//         while (freq_array[ch] > 0)
//         {
//             cout << ch;
//             freq_array[ch]--;
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
    int freq_array[130] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        char ch;
        cin >> ch;
        freq_array[ch]++;
    }
    for (char ch = 'a'; ch < 'z'; ch++)
    {
        /* code */
        while (freq_array[ch] > 0)
        {
            /* code */
            cout << ch;
            freq_array[ch]--;
        }
    }

    return 0;
}