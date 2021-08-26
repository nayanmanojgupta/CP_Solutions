#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int tc=1;tc<=t;tc++)
	{
		int x,y;
		cin>>x>>y;
		string s;
		cin>>s;
		int n=s.length();
		int ans=0;
		char prev='0';
		for(int k=0;k<n;k++)
		{
			if(s[k]=='J')
			{
				if(prev=='C')
				   ans+=x;
				   
				prev='J';   
			}
			else if(s[k]=='C')
			{
				if(prev=='J')
					ans+=y;
					
				prev='C';
					
			}
		}
		
		cout<<"Case #"<<tc<<": "<<ans<<"\n";
		
		
		
	}
	return 0;
	
}