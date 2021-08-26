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
string getBinary(ll num)
{
    string s = "";
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            s += "0";
        }
        else
        {
            s += "1";
        }
        num >>= 1;
    }
    reverse(s.begin(), s.end());
    return s;
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
        int n;
        cin>>n;
        vector<int> even,odd;
        fi
        {
            int x;
            cin>>x;
            
            if(x%2==0)
            {
                even.pb(x);

            }
            else
            odd.pb(x);

        }
        for(auto y:odd)
        {
            cout<<y<<" ";
        }
        for(auto z:even)
           cout<<z<<" ";
           cout<<"\n";
           

    }

    return 0;
}
