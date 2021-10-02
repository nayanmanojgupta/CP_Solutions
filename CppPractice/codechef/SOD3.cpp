// problem link: https://www.codechef.com/LTIME100B/problems/SOD3/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pi (3.141592653589)

void solve()
{
    ll l, r;
    cin>>l>>r;
    while(l%3 != 0)
    {
        l++;
    }
    while(r%3 != 0)
    {
        r--;
    }
    ll count = r-l;
    ll ans = (count/3) + 1;
    cout<<ans<<endl;

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
