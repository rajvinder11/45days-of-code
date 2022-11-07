#include<iostream>
using namespace std;

int main(){
    int T, x;
    cout<<"Enter no. of case: "<<endl;
    cin>>T;

    for(int i=0; i<=T; i++){
        cout<<"Enter temperature: "<<endl;
        cin>>x;
        if(x>=98){
            cout<<"Have fever"<<endl;
        }
        else{
            cout<<"N0 fever"<<endl;
        }
    }
    
    return 0;
}