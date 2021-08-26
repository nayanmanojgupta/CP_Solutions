#include<bits/stdc++.h> 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)   
#define ll long long 
#define fi for(ll i=0;i<n;i++)
#define pb push_back
#define countsetbit __builtin_popcount
 
using namespace std;
//string getBinary(ll num){string s="";while(num!=0){ if(num%2==0){s+="0";}else{s+="1";}num>>=1;}reverse(s.begin(),s.end());return s;}

int main()
{
	boost;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	

	ll tc;
	cin>>tc;
	while(tc--)
	{
	        ll n;
        	cin>>n;
        	if(n<2){cout<<"1"<<"\n";continue;}

        	vector<ll> v1;
        	for(int i=0;i<n;i++)
        	{
        		ll a;
                cin>>a;
        		v1.pb(a);
        	}
        
        	vector<pair<ll,ll>> v2;
        	ll len=2;
        	ll maxi=1;
        	v2.push_back({0,v1[0]});
        	v2.push_back({1,v1[1]});
            for(ll i=2;i<n;i++)
        	{
        		while(len>=2)
        		{
        			double slope1=(v2[len-1].second-v2[len-2].second)/((v2[len-1].first-v2[len-2].first)*1.0);
        			double slope2=(v1[i]-v2[len-1].second)/((i-v2[len-1].first)*1.0);
        			if(slope2>=slope1)
        			{
        				v2.pop_back();
        				len--;
        			}
        			else
        			{
        				break;
        			}
        		}
        		v2.push_back({i,v1[i]});
        		len++;
        		maxi=max(maxi,v2[len-1].first-v2[len-2].first);
        	}
        	cout<<maxi<<"\n";
	
	}

	return 0;
}