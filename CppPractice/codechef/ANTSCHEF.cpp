// Working Online IDE
#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
	boost;
	ll tc;
	cin>>tc;
	while(tc--)
	{
		ll n;
		cin>>n;
		vector <ll> ant[n];
		ll ans=0;
		map<ll,ll> freq;
		vector<ll> dist;
		fi
		{
			ll  m;
			cin>>m;
			while(m--)
			{
				ll x;
				cin>>x;
				freq[abs(x)]++;
				if(freq[abs(x)]==1)
				   dist.pb(abs(x));
				ant[i].push_back(x);
			}

		}
		fi
		{
			vector<pair<ll,ll> > p;
			ll pos=0,neg=0;
			for(auto q :ant[i])
			{
				if(q<0)
				{
					neg++;
					p.push_back({abs(q),-1});
				}
				else
				 {
				 	pos++;
					p.push_back({abs(q),1});
				 	
				 }
			}
			sort(p.begin(),p.end());
			for(auto w:p)
			{
				if(w.second==-1)
				{
					neg--;
				}
				else
				{
					pos--;
				}
				if(freq[w.first]>1)
				{
					if(w.second==-1)
					{
						ans+=neg;
					}
					else
					   ans+=pos;
				}
				else
				{
					if(w.second==-1)
					{
						ans+=pos;
					}
					else
					   ans+=neg;
				}
			}
			
			
			
		}
// 		cout<<ans<<"\n";
		
		for(auto e:dist)
		{
			if(freq[e]>1)
			   ans++;
			   
		}
		cout<<ans<< "\n";
	
		
	}




	return 0;

}


