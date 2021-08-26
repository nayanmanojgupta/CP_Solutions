#include<iostream>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long
#define fi for(int i=0;i<n;i++);
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
			int n;
			string s;
			cin>>n>>s;
			int count=0;
			for(int i=n-1;i>=0;i--)
			{
				if(s[i]==')')
				   count++;
				else
				{
					break;
				   }   
				   
			}
			
			if(count>n-count)
			{
				cout<<"Yes"<<endl;
				
			}
			
			else
			{
				cout<<"No"<<endl;
				
			}
	}




	return 0;

}


