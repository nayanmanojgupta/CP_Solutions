/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here


#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> getPrime(int x)
{
    vector<ll> prime(x+1,0);
    for(int i=2;i*i<=x;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=x;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    vector<ll> ans;
    for(int i=2;i<=x;i++)
    {
            if(prime[i]==0)
               ans.push_back(i);
    }
    return ans;

}
vector<ll> getSupreme(int x)
{
    vector<ll> prime(x+1,0);
    for(int i=2;i*i<=x;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=x;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    return prime;

}
int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
    ll x,k;
    cin>>x>>k;
    vector<ll> primes=getPrime(x);
    vector<ll> supreme=getSupreme(1e5);
    
    vector<ll> arr(1e5+1,0);
    for(int i=0;i<primes.size();i++)
    {
        ll temp=primes[i];
        for(int j=2*temp;j<=1e5;j+=temp)
        {
            arr[j]=-1;
        }
    }
    int temp=primes[primes.size()-1];
    vector<ll> ans;
    for(int i=temp+1;i<=1e5;i++)
    {
        if(arr[i]==0 && supreme[i]==1)
        {
            ans.push_back(i);
        }
    }
    cout<<ans[k-1]<<"\n";	
	}
    



    return 0;

}
