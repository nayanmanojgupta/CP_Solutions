#include<bits/stdc++.h>
#define nline '\n';
#define ll long long

using namespace std;
void solve();

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}

void solve()
{
    ll t;
    cin>>t;
    while(t--)
    {
        //code here
        string s;
        cin>>s;
        ll n=s.length();
        ll i,w=0;
       
        for(i=0;i<n;i++)
        {
            if(w%2==1 && s[i]=='1')
            w++;
            else if(w%2==0 && s[i]=='0')
            w++;
        }
        cout<<w<<endl;
    }
}
