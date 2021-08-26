// dp approach for palindrome partioning
#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long;
#define fi for(int i=0;i<n;i++);
using namespace std;

bool isPalindrome(string s,int i,int j)
{

	for(int k=i;k<j/2;k++)
	{
		if(s[k]!=s[j--])
		{
			return false;
		}
	}
	
	return true;
	
}

int solve(string s,int i,int j)
{
	if(i>=j)
	  return 0;
	if(isPalindrome(s,i,j))
	   return 0;
	 
	 
	 int min=INT_MAX;
	 for(int k=i;k<j;k++)
	 {
	 	int temp=1+solve(s,i,k)+solve(s,k+1,j);
	 	if(temp<min)
	 	  min=temp;
	 	  
	   }  
	   
	   
	   return min;
	   
	   
	     
}

int main()
{
//	int tc;
//	cin>>tc;
//	while(tc--)
//	{
//		
//	}


	string s="ababbbabbababa";
	int i=0;int j=s.length()-1;
	cout<<solve(s,i,j);


	

	
	return 0;
	
}

