#include<bits/stdc++.h>
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long;
#define fi for(int i=0;i<n;i++);
#define fj for(int j=0;j<n;j++);
using namespace std;
int main()
{
     int n,i,j,num;
     cin>>n;
     int a[n][n];
     for( i=0;i<n;i++)
     {   
	 		for( j=0;j<n;j++)
     			{
     				cin>>a[i][j];
     	
				 }
     	
	 }
	 int b[n+1][n+1];
	for( i=0;i<n+1;i++)
	 		for( j=0;j<n+1;j++)
    			 {
     				b[i][j]=1;
     	
				 }
 	
 	
 	


	i=0,j=0;
	int value=a[i][j]-(b[i][j]+b[i+1][j]+b[i][j+1]+b[i+1][j+1]);
			if(value>=8)
			{
				b[i][j]+=8;
				value-=8;
				 num=value/3;
				if(value%3==0)
				{
					
					b[i][j+1]+=num;
					b[i+1][j]+=num;
					b[i+1][j+1]+=num;
					
				}
				else
				{
					b[i][j+1]+=num;
					b[i+1][j]+=num+1;
					b[i+1][j+1]+=num+1;
				}
			}
			else
			{
					b[i][j]+=value;
			}
	    	


	for(j=1;j<n;j++)
	    {
	    	i=0;
	    	int val=a[i][j]-(b[i][j]+b[i+1][j]+b[i][j+1]+b[i+1][j+1]);
	    	num=val/3;
	    	if(val>=8)
	    	{
	    		b[i][j+1]+=8;
				val-=8;
				b[i+1][j+1]=val;
//	    		if(val%3==0)
//				{
//					
//					b[i][j]+=num;
//					b[i+1][j]+=num;
//					b[i+1][j+1]+=num;
//					
//				}
//				else
//				{
//					b[i][j]+=num;
//					b[i+1][j]+=num+1;
//					b[i+1][j+1]+=num+1;
//				}	
			}
			else
			{
					b[i][j+1]+=val;	
			}    	
	    	
	    	
		}
		
		for(i=1;i<n;i++)
		    for(j=0;j<n;j++)
		    {
		    	if(j==0)
		    	{
		    		
					int val=a[i][j]-(b[i][j]+b[i+1][j]+b[i][j+1]+b[i+1][j+1]);
						num=val/3;
				    	if(val>=8)
				    	{	b[i+1][j]+=8;
							val-=8;
							b[i+1][j+1]=val;
//				    		if(val%3==0)
//							{
//								
//								b[i][j]+=num;
//								b[i][j+1]+=num;
//								b[i+1][j+1]+=num;
//								
//							}
//							else
//							{
//								b[i][j]+=num;
//								b[i][j+1]+=num+1;
//								b[i+1][j+1]+=num+1;
//							}	
						}
						else
						{
							b[i+1][j]+=val;
						}    
					
					
					
					
				
				}
				else
				{
					int val=a[i][j]-(b[i][j]+b[i+1][j]+b[i][j+1]+b[i+1][j+1]);
						num=val/3;
				    	if(val>=8)
				    	{		b[i+1][j+1]+=8;
								val-=8;
//				    		if(val%3==0)
//							{
//								
//								b[i][j]+=num;
//								b[i][j+1]+=num;
//								b[i+1][j+1]+=num;
//								
//							}
//							else
//							{
//								b[i][j]+=num;
//								b[i][j+1]+=num+1;
//								b[i+1][j]+=num+1;
//							}	
						}
						else
						{
							b[i+1][j+1]+=val;
						}    
					
					
				}
			}
			
			
			
			cout<<"\n";
	 for(i=0;i<n+1;i++)
	 {
	 	for(j=0;j<n+1;j++)
    			 {
     				printf("%5d",b[i][j]);
     	
				 }
			cout<<"\n"; 	
	 }
      		



	 
	 




	return 0;

}


