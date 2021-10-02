// problem link: https://www.codechef.com/LTIME100B/problems/ALBOFACE

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi (3.141592653589)

void help(ll n, ll &count)
{
    while (n > 0)
    {
        ll count1 = 0;
        while (n % 2 == 0)
        {
            n = n / 2;
            count1++;
        }
        n--;
        if (count1 >= 2)
        {
            count++;
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << "Alice" << endl;
        return;
    }
    if (n == 2)
    {
        cout << "Bob" << endl;
        return;
    }

//     if (ceil(log2(n)) == floor(log2(n)))
//     {
//         cout << "Alice" << endl;
//         return;
//     }
    // ll temp = floor(log2(n));
    // ll temp2 = pow(2, temp);
    if (n & (ll)1)
    {
        n--;
        ll count0 = 0;
        help(n, count0);
        if (count0 == 0)
        {
            cout << "Alice" << endl;
            return;
        }
        else
        {
            cout << "Bob" << endl;
            return;
        }
    }
    else
    {
        ll count0 = 0;
        help(n, count0);
        if (count0 == 0)
        {
            cout << "Bob" << endl;
            return;
        }
        else
        {
            cout << "Alice" << endl;
            return;
        }
    }
    return;
}

int main()
{

    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
