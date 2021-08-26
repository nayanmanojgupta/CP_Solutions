#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int tc=1;tc<=t;tc++)
	{
			int n,c;
			cin>>n>>c;
			int mine,maxe;
			mine=n-1;
			maxe=2*n-2;
			if(c<mine || c>maxe)
			{
				cout<<"Case #"<<tc<<": IMPOSSIBLE\n";
				
			}
			else
			{
				int num=c-mine+1;
				int arr[n];
				for(int i=0;i<n;i++)
				    arr[i]=i+1;
				int i=n-num;
				int minIdx=n-1;    
				int newArr[minIdx-i+1],k=0;
					for(int m=minIdx;m>=i;m--)
					    newArr[k++]=arr[m];
					k=0;    
					for(int m=i;m<=minIdx;m++)
					    arr[m]=newArr[k++]; 
					    
				cout<<"Case #"<<tc<<": ";
				for(int i=0;i<n;i++)
				    cout<<arr[i]<<" ";
					cout<<"\n";
						    
				
				
				
			}
				
	}

	
	return 0;
	
}