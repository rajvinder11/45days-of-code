#include <iostream>
using namespace std;

int main() {
	int T, x, y, ch, cdy;
	cout<<"enter no. of test case: "<<endl;
	cin>>T;
	
	for(int i=0; i<T; i++){
        cin>>x>>y;
        ch = x*2;
	    cdy = x*5;
	    if(ch>cdy){
	        cout<<"chocolate"<<endl;
	    }
	    else if(ch<cdy){
	        cout<<"candy"<<endl;
	    }
	    else{
	        cout<<"either"<<endl;
	    }
	}
	return 0;
}
