#include<bits/stdc++.h>
using namespace std ;
#define lln long long int 

int main() {
    lln t;
    cin>>t;
    while (t--){
    lln n,k;
    cin>>n>>k;
        //Initialising a vector
    vector<lln>S(n);
    for(lln i=0;i<n;i++) cin>>S[i];
    
        //Sorting the vector in decreasing order
    sort(S.begin(),S.end(),greater<int>());
         //min qualified teams will be equal to k
    lln ans=k;
        //Iterating from kth to n-1 podition and check if adjacent element are equal then increment the ans variable by 1 else break
    for(lln i=k;i<n;i++){
        if(S[i]==S[k-1]){
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}
