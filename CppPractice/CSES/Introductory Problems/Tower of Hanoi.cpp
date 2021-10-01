#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define endl "\n"

void toh(int a, int b, int c, int n)
{
    if(n==0)
    return;
    toh(a,c,b,n-1);
    cout<<a<<" "<<c<<endl;
    toh(b,a,c,n-1);
    return;
}

void solve()
{
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl;
    toh(1, 2, 3, n);
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
    // int t;
    // cin >> t;
    // while (t--)
    solve();
    // Code end here //
    return 0;
}