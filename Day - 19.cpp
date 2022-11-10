#include<iostream>
using namespace std;

int main(){
    int T, x, y;
    cout <<"Enter number test case:"<<endl;
    cin>>T;

    for(int i=0; i<T; i++){
        cout<<"enter marks x and y: "<<endl;
        cin>>x>>y;

        if(x>y){
            cout<<"final marks is: "<<x<<endl;
        }
        else{
            cout<<"final marks is: "<<y<<endl;
        }
    }
    return 0;
}