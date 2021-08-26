#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
        int t;
        cin>>t;
        for(int tc=1;tc<=t;tc++)
        {
        	int n;
        	cin>>n;
        	int arr[n];
        	for(int i=0;i<n;i++)
        	    cin>>arr[i];
        	// // remove it
			int orgArr[n];
			for(int i=0;i<n;i++)
			     orgArr[i]=arr[i];

        	int mine=INT_MAX,cost=0,minIdx=0;
        	for(int i=0;i<n-1;i++)
        	{	
        		mine=INT_MAX;
        		for(int j=i;j<=n-1;j++)
        		{
        			if(arr[j]<mine)
        			   {
	        			   	mine=arr[j];
	        			   	minIdx=j;
					   }
					   
					   
				}
					int newArr[minIdx-i+1],k=0;
					for(int m=minIdx;m>=i;m--)
					    newArr[k++]=arr[m];
					k=0;    
					for(int m=i;m<=minIdx;m++)
					    arr[m]=newArr[k++];   
//					for(int m=0;m<n;m++)
//					    cout<<arr[m]<<" ";
//					    cout<<"\n";
					        
//					cout<<i<<" "<<minIdx<<"\n";
					cost+=minIdx-i+1;
			}
			// if(cost==14)
			// {
				for(int i=0;i<n;i++)
				     cout<<orgArr[i]<<" ";
					 cout<<"\n";
			// }
            cout<<"Case #"<<tc<<": "<<cost<<"\n";
        }
// 7
// 7
// 1 2 3 4 5 6 7
// 7 
// 1 2 3 4 5 7 6
// 7 
// 1 2 3 4 7 6 5
// 7
// 1 2 3 7 6 5 4
// 7
// 1 2 7 6 5 4 3
// 7
// 1 7 6 5 4 3 2
// 7
// 7 6 5 4 3 2 1
   
   
   
    
        return 0;
        
}