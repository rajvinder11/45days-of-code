#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;

    cout<<"Enter number "<<endl;
    cin>>n;
    for(int i=1; i<n; i++){
        if(n%i == 0){
            sum+=i;
        }
    }
    if(sum == n){
        cout<<n<<" is a Perfect Number "<<endl;
    }
    else{
        cout<<n<<" is not a Perfect Number "<<endl;
    }

    cout<<"Divisor of "<< n<<":"<<endl;
    for(int i=1; i<=n; i++){
        if((n%i)==0){
            cout<<i<<" ";
        }
    }

    return 0;
}