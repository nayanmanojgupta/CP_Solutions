#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}

int istrue(int n)
{
    
    if(n>0)
    {
        while(n%2 == 0)
        {
            n/=2;
        }
        if(n == 1)
        {
            return 1;
            
        }
        else 
           return 0;
           
    }
}

int main() {
	// your code goes here
	// This code is for POSAND question of october long challenge.
	int t;
	cin>>t;
	while(t!=0)
	{
	    
	    int n;
	    bool check=false;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        arr[i]=i+1;
	    }
	    if(n==1)
	    {
	        cout<<"1";
	        
	    }
	    else if(n==2)
	    {
	        cout<<"-1";
	    }
	    else if(n==3)
	    {
	        cout<<"2 3 1";
	    }
	    else if(n==4)
	    {
	        cout<<"-1";
	    }
	    else
	    {
	       for(int i=3;i<n-1;i++)
	      { 
	          
	          if(istrue(arr[i])==1)
	          {
	            swap(arr[i],arr[i+1]);
	            check=true;
	            i++;
	          }
                	        
	      } 
	      
	      if(check==true)
	      {
	          cout<<"2 3 1";
	          for(int i=3;i<n;i++)
	          {
	              cout<<" "<<arr[i];
	          }
	      }
	      else
	      {
	          cout<<"-1";
	      }
	      
	    
	    
	       
	    }
	    cout<<endl; 
	    t--;
	    
	}
	return 0;
}
