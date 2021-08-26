#include<bits/stdc++.h>
//#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;
int main()
{
//	boost;
	int n;
	scanf("%d",&n);
	int arr[100002];
	arr[0]=INT_MAX;
	arr[n+1]=INT_MAX;
	int l=1,r=n,mid;
	while(l<r)
	{
		mid=(l+r+1)/2;
		printf("? %d\n",mid);
		fflush(stdout);
		scanf("%d",arr[mid]);
		if(mid+1<=n)
		{
			printf("? %d\n",mid+1);
		fflush(stdout);
		scanf("%d",arr[mid+1]);
			
		}
		
		if(arr[mid]<arr[mid+1])
		    r=mid;
		else
			l=mid+1;
			    
		
		
		}	
		
		printf("! %d\n",l);
		fflush(stdout);
			



	return 0;

}


