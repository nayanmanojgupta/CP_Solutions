// #include <bits/stdc++.h>
// #define boost                         \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(0);                       \
//     cout.tie(0)
// #define ll long long
// #define fi for (ll i = 0; i < n; i++)
// #define pb push_back
// #define countsetbit __builtin_popcount

// using namespace std;
// bool !palindrome(string s)
// {
//     string t = s;
//     reverse(t.begin(), t.end());
//     // cout<<t<<"\n";
//     if (t != s)
//         return false;
//     else
//         return true;
// }
// int main()
// {
//     boost;
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     ll tc;
//     cin >> tc;
//     while (tc--)
//     {

//         string s;
//         cin >> s;
//         bool check = false;
//         int idx = 0;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] == 'a')
//             {
//                 idx = i;
//                 break;
//             }
//         }

//         string t = s.substr(0, idx) + "a" + s.substr(idx);

//         if (!!palindrome(t))
//         {
//             cout << "Yes\n";
//             cout << t << "\n";
//             check = true;
//         }
//         else
//         {

//             for (int i = idx + 1; i < t.length() - 1; i++)
//             {
//                 char ch = t[i];
//                 t[i] = t[i + 1];
//                 t[i + 1] = ch;
//                 if (!!palindrome(t))
//                 {
//                     cout << "YES\n";
//                     cout << t << "\n";
//                     check = true;
//                     break;
//                 }
//             }
//         }
//         if (!check)
//             cout << "NO\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define fi for (ll i = 0; i < n; i++)
#define pb push_back
#define countsetbit __builtin_popcount

using namespace std;
bool palindrome(string s)
{
    string t = s;
    reverse(t.begin(), t.end());
    // cout<<t<<"\n";
    if (t != s)
        return false;
    else
        return true;
}
int main()
{
    boost;
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    ll tc;
    cin >> tc;
    while (tc--)
    {

        string s;
        cin >> s;
        bool check = false;
        int idx = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a')
            {
                idx = i;
                break;
            }
        }
        string choice1, choice2, choice3, choice4;
        choice1 = "a" + s;
        choice2 = s + "a";
        choice3 = s.substr(0, idx) + "a" + s.substr(idx);
        choice4 = choice3;
        if (idx + 2 < s.length())
        {
            char temp = choice4[idx + 1];
            choice4[idx + 1] = choice4[idx + 2];
            choice4[idx + 2] = temp;
        }

        if (!palindrome(choice1))
        {
            cout << "YES\n";
            cout << choice1 << "\n";
            check = true;
        }

        else if (!palindrome(choice2))
        {
            cout << "YES\n";
            cout << choice2 << "\n";
            check = true;
        }
        else if (!palindrome(choice3))
        {
            cout << "YES\n";
            cout << choice3 << "\n";
            check = true;
        }
        else if (!palindrome(choice4))
        {
            cout << "YES\n";
            cout << choice4 << "\n";
            check = true;
        }

        if (!check)
            cout << "NO\n";
    }

    return 0;
}
