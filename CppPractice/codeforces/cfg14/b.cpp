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
// int main()
// {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

//     boost;
//     ll tc;
//     cin >> tc;
//     while (tc--)
//     {
//         bool flag1 = false, flag2 = false;
//         ll n;
//         cin >> n;

//         if (n % 4 == 0)
//         {

//             ll a = sqrt(n / 4);
//             flag2 = (a * a == n / 4) ? true : false;
//         }

//         if (n % 2 == 0)
//         {
//             ll a = sqrt(n / 2);
//             flag1 = (a * a == n / 2) ? true : false;
//         }

//         if (flag1 || flag2)
//         {
//             cout << "YES\n";
//         }
//         else
//         {
//             cout << "NO\n";
//         }
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
        int n;
        cin >> n;
        if (n == 1 || n % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }
        while (n % 2 == 0)
        {
            n /= 2;
        }
        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }
        int a = sqrt(n);
        if (a * a == n)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}
