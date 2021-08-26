#include<iostream>
using namespace std;
// This is the code of Bubble Sort doing sorting in increasing order.
int main()
{
	int n,i,j,temp,flag; 
	// flag is used to ensure that if array is already sorted than we donot iterate again.
	
	cout<<"Enter the no of elements\n";
	cin>>n;
	int a[n];
                  cout<<"Enter the elements \n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		
	     flag=0; 
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
				
			}
		}
		
		if(flag==0)   // means no swap done, array already sorted, no need to iterate again
		{
			break;
		}
	}
                  cout<<"The sorted array is : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

