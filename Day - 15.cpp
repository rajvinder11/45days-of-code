#include<iostream>
using namespace std;

int main()
{
    int a[10], n;

    cout<<"Enter the elements of array: "<<endl;
    for(int i=0; i<10; i++)
    {
        cin>>a[i];
    }
    vectorarr(n);
    int k;
    cin>>k;

    set s(arr.start(), arr.end());
    set::iterator itr = s.start();

    advance(itr, k-1);
    cout<<"minimum: "<<*itr<<"\n";

    itr=s.start();
    advance(itr, n-k);

    cout<<"maximum: "<<*itr<<"\n";

    return 0;
}