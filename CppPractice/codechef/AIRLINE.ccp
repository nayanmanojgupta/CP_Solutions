#include<iostream>
using namespace std;


int main() {
	// your code goes here
	int T;
	int A,B,C,D,E;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>A>>B>>C>>D>>E;
	    if(A+B<=D && C<=E){
	      cout<<"YES"<<endl;
	    }
	    else if(A+C<=D && B<=E){
	      cout<<"YES"<<endl;
	    }
	    else if(C+B<=D && A<=E){
	      cout<<"YES"<<endl;
	    }
	    else{
	      cout<<"NO"<<endl;
	    }
	   
	}
	
	return 0;
}
