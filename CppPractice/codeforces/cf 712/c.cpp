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

        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll one=0,zero=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
              one++;
            else
              zero++;  
        }
        string a="",b="";
        if(one%2==1 || zero%2==1 || s[0]=='0' || s[n-1]=='0')
        {
            cout<<"NO\n";
            continue;

        }
        else
        {

            for(int i=0;i<n;i++)
            {
                if(s[i]=='1')
                {
                    if(one)
                    {
                        a.pb('(');
                        b.pb('(');
                        one-=2;
                    }
                    else
                    {
                        a.pb(')');
                        b.pb(')');
                    }
                }
                else
                {
                    if(zero%2==0)
                    {
                        a.pb('(');
                        b.pb(')');
                        zero-=1;
                    }
                    else
                    {
                        a.pb(')');
                        b.pb('(');
                        zero-=1;
                    }
                }
            }
        }

        cout<<"YES\n";
        cout<<a<<"\n"<<b<<"\n";

        
     }

    return 0;
}
