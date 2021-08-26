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
//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif

	int n;
	cin>>n;
	ll product=1;
	int count[n]={0};
	
	for(int i=1;i<=n-1;i++)
	{
		if(__gcd(n,i)==1)
		{
			count[i]=1;
		
			product=(product*i)%n;
			
		}
	}

	if(product!=1)
	{
		count[product]=0;
	
		
	}
	int c=0;
	for(int i=1;i<=n-1;i++)
	{
		if(count[i])
		   c++;
	}
	cout<<c<<"\n";
	for(int i=1;i<=n-1;i++)
	{
		if(count[i])
		   cout<<i<<" ";
		   
	}
	cout<<"\n";
	
	
	
	
	
    return 0;
}
