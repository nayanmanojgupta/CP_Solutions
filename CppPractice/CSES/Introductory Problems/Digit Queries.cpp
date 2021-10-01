/**
 * Code Written by hritikhrk (Hritik Kumar)
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"

void solve()
{
    ll n;
    cin >> n;
    if (n / 10 == 0)
    {
        cout << n << endl;
        return;
    }
    ll digit = 1;
    ll sum = 0;
    ll temp = 0;
    for (ll i = 9; sum < n; i *= 10)
    {
        temp = sum;
        sum += (i * digit++);
    }
    digit--;
    // cout<<"temp = "<<temp<<endl;
    // cout << "digit=" << digit << endl;
    ll y = pow(10, digit - 1);
    ll num = y - 1;
    // cout<<"num="<<num<<endl;
    temp = n - temp;
    num += temp / digit;
    ll ind = temp % digit;
    string s = to_string(num);
    if (ind == 0)
    {
        cout << s[digit - 1] << endl;
        return;
    }
    s = to_string(++num);
    cout << s[ind - 1] << endl;
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;

    //Code starts from here //
    int testCases;
    cin >> testCases;
    while (testCases--)
        solve();
    // Code end here //
    return 0;
}