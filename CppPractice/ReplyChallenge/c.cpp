#include<bits/stdc++.h>
using namespace std;
#define dd double
#define ll long long int 
#define light ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mkp make_pair
#define pi pair<ll,ll>
#define pii pair<ll,pi>
#define fi first
#define sc second
ll INF=1e9+5;
ll mod=998244353;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	light;
	ll t;
	cin>>t;
	for(ll p=1;p<=t;p++){
		ll n,k;
		cin>>n>>k;
		ll cnta=0,cntb=0;
		vector<ll>posa,posb,nega,negb;
		for(ll i=0;i<n;i++){
			ll x;cin>>x;
			if(!x){
				cnta++;
			}
			else if(x>0){
				posa.pb(x);
			}
			else{
				nega.pb(-x);
			}
		}
		for(ll i=0;i<n;i++){
			ll x;cin>>x;
			if(!x){
				cntb++;
			}
			else if(x>0){
				posb.pb(x);
			}
			else{
				negb.pb(-x);
			}
		}
		sort(posa.begin(),posa.end());
		sort(posb.begin(),posb.end());
		sort(nega.begin(),nega.end());
		sort(negb.begin(),negb.end());
		ll temp=k,x=cnta,y=cntb;
		// for maxi.
		ll maxi=0;
		vector<ll>temp1(posa),temp2(posb),temp3(nega),temp4(negb);
		while(k--){
			ll add1=0,add2=0;
			if(!posa.empty() && !posb.empty()){
				add1=posa.back()*posb.back();
			}
			if(!nega.empty() && !negb.empty()){
				add2=posa.back()*posb.back();
			}
			if(!add1 && !add2){
				if(cnta){
					if(!posb.empty()){
						posb.pop_back();
					}
					else{
						negb.pop_back();
					}
					cnta--;
				}
				else if(cntb){
					if(!posa.empty()){
						posa.pop_back();
					}
					else{
						nega.pop_back();
					}
					cntb--;
				}
				else{
					k++;
					if(!posa.empty()){
						ll i=0,j=k-1;
						while(k--){
							maxi-=posa[i]*negb[j];
							i++;
							j--;
						}
					}
					else{
						ll i=0,j=k-1;
						while(k--){
							maxi-=nega[i]*posb[j];
							i++;
							j--;
						}
					}
				}
				continue;
			}
			if(add1>=add2){
				maxi+=add1;
				posa.pop_back();
				posb.pop_back();
			}
			else{
				maxi+=add2;
				nega.pop_back();
				negb.pop_back();
			}
		}
		ll mini=0;
		posa=temp1;
		posb=temp2;
		nega=temp3;
		negb=temp4;
		cnta=x;
		cntb=y;
		k=temp;
		// cout<<maxi<<"\n";
		while(k--){
			ll add1=0,add2=0;
			if(!posa.empty() && !negb.empty()){
				add1=posa.back()*negb.back();
			}
			if(!nega.empty() && !posb.empty()){
				add2=nega.back()*posb.back();
			}
			if(!add1 && !add2){
				if(cnta){
					if(!posb.empty()){
						posb.pop_back();
					}
					else{
						negb.pop_back();
					}
					cnta--;
				}
				else if(cntb){
					if(!posa.empty()){
						posa.pop_back();
					}
					else{
						nega.pop_back();
					}
					cntb--;
				}
				else{
					k++;
					if(!posa.empty()){
						ll i=0,j=k-1;
						for(ll m=0;m<k;m++){
							mini+=posa[i]*posb[j];
							i++;
							j--;
						}
						k=0;
					}
					else{
						ll i=0,j=k-1;
						for(ll m=0;m<k;m++){
							mini+=nega[i]*negb[j];
							i++;
							j--;
						}
						k=0;
					}
				}
				continue;
			}
			if(add1>=add2){
				mini-=add1;
				posa.pop_back();
				negb.pop_back();
			}
			else{
				mini-=add2;
				nega.pop_back();
				posb.pop_back();
			}
		}
		cout<<"Case #"<<p<<": "<<mini<<" "<<maxi<<"\n";
	}
}