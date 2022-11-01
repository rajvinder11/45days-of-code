#include<iostream>
using namespace std;

int main()
{
    int x, i;
    cout<<"Enter Integer variable ";
    cin>>x;

    cout<<x<<" can be totally divided by: "<<endl;
    for(i=1; i<=x; i++){
        if((x%i)==0){
            cout<<i<<" ";
        }
    }

    return 0;
}