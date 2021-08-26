#include <bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define fi for(ll i=0;i<n;i++)
#define pb push_back
#define fj for(ll j=0;j<n;j++)
#define ll long long
using namespace std;

int find_index(vector<int> v, int k)
{
    auto itr = find(v.begin(),v.end(),k);
    if(itr!=v.end()) 
    {
        int idx=itr-v.begin();
        return idx;
    }
    else
	 {
        return -1;
    }
}

int main() {
	ll tc;
	cin>>tc;
	while(tc--)
	{
	    ll n;
	    cin>>n;
		ll count=0;

        vector<int> weight;
		fi
		{
			int num;
			cin>>num;
			weight.pb(num);
			
			
		 }
        vector<int> position(n);
        fi
        {
        	position[i]=i;
		}
        vector<int> length;
		fi
		{
			int num;
			cin>>num;
			length.pb(num);
		 }

        vector<int> temp(n);
		fi
		{
			temp[i]=weight[i];
		}
		sort(temp.begin(),temp.end());

        for(int j=1;j<n;j++)
        {
            int idx =find_index(weight,temp[j]);
            int p=position[find_index(weight,temp[j-1])];
            int c=idx;

            while(c<=p)
            {
                c+=length[idx];
                position[idx]=c;
                count++;
            }
        }
        cout<<count<<"\n";
	}
	return 0;
}


