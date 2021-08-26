#include<bits/stdc++.h> 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)   
 
using namespace std;
int main()
{
	boost;
    #ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
	int tc;
	cin>>tc;
	for(int j=1;j<=tc;j++)
	{

        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0,ans=0;
        for(int i=0;i<n/2;i++)
        {
                if(s[i]==s[n-i-1])
                   count++;
        }
        if(n==1)
        {
            ans=0;
        }
        else
        {
             ans=abs(k-count);
        }

       
        



        cout<<"Case #"<<j<<": "<<ans<<"\n";
          

	}




	return 0;

}





