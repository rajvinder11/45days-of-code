#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,x,y,ans;
	cin>>T;
	for (int i=1;i<=T;i++){
	    cin>>x;
	    cin>>y;
	    ans = x-y;
	    if(x>y){
	        cout<<ans<<endl;
	    }
	    else {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}