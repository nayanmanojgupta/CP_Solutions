#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(int i=0;i<n;i++);

using namespace std;

bool check(ll n)
{  
	int nod=0;
	ll temp=n;
      while(temp!=0)
      {
      		temp/=10;
      		nod++;
      		
	  }
//	  cout<<"nod are "<<nod<<endl;
	 
	  temp=n;
	  
	 
	  
	  for(int i=1;i<=nod;i++)
	  {
	  	  
	  	  ll div=temp%10;
	  	 
	  	  temp/=10;
	  	 if(div!=0 && n%div!=0)
	  	 {
	  	 	
	  	 	return false;
		   }
	  }
	  
	  return true;
	  
      
}
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
         ll n;
         cin>>n;
       
        	
				 	
         
        while(true)
         {
         	if(check(n++))
         	{
         		cout<<n-1<<endl;
         		break;
			 }
			 
		 }
         
	}




	return 0;

}


