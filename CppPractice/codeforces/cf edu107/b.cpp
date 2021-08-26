#include <bits/stdc++.h>
#define boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)
#define ll long long
#define fi for (ll i = 0; i < n; i++)
#define pb push_back
#define countsetbit __builtin_popcount
int count(int n)
{
    int c=0;
    while(n!=0)
    {
            c++;
            n/=10;
    }
    return c;
}
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
        int a,b,c;
        cin>>a>>b>>c;
        int temp=1,templength=1;
        while(templength!=c)
        {
            temp++;
            templength=count(temp);
        }
        int ans1=temp,ans2=temp;
        int length1=c,length2=c;
        while(length1!=a)
        {
            ans1*=2;
            length1=count(ans1);   
        }

        while(length2!=b)
        {
            ans2*=3;
            length2=count(ans2);   
        }
        
        cout<<ans1<<" "<<ans2<<"\n";
        

    }

    return 0;
}
