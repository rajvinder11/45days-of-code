#include<iostream>
using namespace std;
int main(){
    int count=0;
    int x;
    cout<<"Enter the value of x : ";cin>>x;
    for(int i=1; i<=x/2; i++){
        if(x%i==0){
            count++;
            cout<<i<<"\t"<<endl;
        }
    }
    cout<<"Number of divisors of the given number is :"<<count;
    return 0;
} 