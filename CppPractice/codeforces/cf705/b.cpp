#include<bits/stdc++.h>
// #define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define fi for(ll i=0;i<n;i++)
#define pb push_back
using namespace std;

int arr[10]={0,1,5,-1,-1,2,-1,-1,8,-1};

bool isValid(int h,int m,int lh,int lm)
{
    int hl,hr,ml,mr;
    hl=m%10;
    hr=m/10;

    ml=h%10;
    mr=h/10;

    int hh=0,mm=0;
    hh=(arr[hl]*10)+(arr[hr]);
    mm=(arr[ml]*10)+(arr[mr]);

    if(arr[hl]==-1 || arr[hr]==-1 ||arr[ml]==-1 ||arr[mr]==-1 )
    {
        return false;

    } 
    else if(hh>=lh || mm>=lm)
    {
            return false;

    }
    
    return true;

}

int main()
{
	// boost;
 	#ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
	ll tc;
	cin>>tc;
	while(tc--)
	{
        int nh,nm;
        cin>>nh>>nm;
        int th,tm;
        scanf("%d:%d",&th,&tm);
        while(!(isValid(th,tm,nh,nm)))
        {
            tm+=1;
            if(tm==nm)
               th++;
            th%=nh;
            tm%=nm;

        }
       

       printf("%02d:%02d\n",th,tm);


	}




	return 0;

}





