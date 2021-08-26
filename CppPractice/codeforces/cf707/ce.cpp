#include<bits/stdc++.h> 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)   
#define ll long long 
#define fi for(ll i=0;i<n;i++)
#define pb push_back
#define countsetbit __builtin_popcount
 
using namespace std;
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
            x += 0x9e3779b97f4a7c15;
            x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
            x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
            return x ^ (x >> 31);
    }
    
    size_t operator()(uint64_t x) const {
            static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
            return splitmix64(x + FIXED_RANDOM);
    }
};
string getBinary(ll num){string s="";while(num!=0){ if(num%2==0){s+="0";}else{s+="1";}num>>=1;}reverse(s.begin(),s.end());return s;}
int main()
{
	boost;
 	#ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
	ll n;
        cin>>n;
        unordered_map<ll,pair<ll,ll>,custom_hash > mp;
        int arr[n];
        fi
         cin>>arr[i];

         for(int i=0;i<n;i++)
         {
                 for(int j=i+1;j<n;j++)
                 {
                         if(mp.find(arr[i]+arr[j])!=mp.end())
                         {
                                int a=mp[arr[i]+arr[j]].first;
                                int b=mp[arr[i]+arr[j]].second;
                                if (a == i || a == j || b == i || b == j)continue;
                                cout<<"Yes\n";
                                cout << a + 1 << " " << b + 1 << " " << i + 1 << " " <<j + 1 <<"\n";
                                return 0;
                         }
                         else
                         {
                                 mp[arr[i]+arr[j]]={i,j};

                         }
                 }
         } 

         cout<<"NO";



	return 0;

}





