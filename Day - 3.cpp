#include<iostream>
using namespace std;

int main()
{
    int a=6, b=45, temp;

    cout<<"before swapping"<<endl;
    cout<<"a = "<<a<<",b="<<b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"\nAfter swapping"<<endl;
    cout<<"a = "<<a<<",b ="<<b<<endl;

    return 0;
}