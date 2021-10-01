#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	  int N;
	  cin>>N;
    if(N==1){
      cout<<"3"<<endl;
    }
    else if(N==2){
      cout<<"33"<<endl;
    }
    else{
      cout<<"3";
      for(int i=1;i<=N-2;i++){
        cout<<"0";
      }
      cout<<"3"<<endl;
    }
	}
	return 0;
}
