#include<iostream>
using namespace std;

int main()
{
    int n;
    int i=1;

    cout<<"Integer range variable "<<endl;
    cin>>n;

    do{
        cout<<i<<endl;
        i++;
    }
    while(i<=n);

    return 0;
}