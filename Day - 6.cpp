#include<iostream>
using namespace std;

int main()
{
    int a[10]={5};
    for(int i=0; i<10; i++){
        a[i] = 5;
    }

    cout<<"\nElement of array a: ";
    for(int i=0; i<10; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}