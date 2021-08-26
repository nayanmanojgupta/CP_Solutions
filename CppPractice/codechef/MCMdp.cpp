// C++ MCM Problem by DP
// 11913042 Nayan Gupta
#include <bits/stdc++.h> 
using namespace std; 
int t[1024][1024]; // for memoization 
  
// Function for matrix chain multiplication 
int MCMmem(int* arr, int i, int j) 
{ 
    if (i == j)  
    { 
        return 0; 
    } 
    if (t[i][j] != -1)  
    { 
        return t[i][j]; 
    } 
    t[i][j] = INT_MAX; 
    for (int k = i; k < j; k++)  
    { 
        t[i][j] = min(t[i][j], MCMmem(arr, i, k)+ MCMmem(arr, k + 1, j) 
                       + arr[i - 1] * arr[k] * arr[j]); 
    } 
    return t[i][j]; 
} 

  

int main() 
{ 
	int n;
	cout<<"Enter no of matrices : ";
	cin>>n;
	n=n+1; // n+1 SIZE required to store dimension of n matrices
    int arr[n],i,j; 
    cout<<"Enter dimensions of matrices: ";
    for(i=0;i<n;i++)
    	cin>>arr[i];
    memset(t, -1, sizeof t);
	i=1;
	j=n-1; 
  
    cout << "Minimum number of multiplications is "
         << MCMmem(arr, i,j); 
} 
  

