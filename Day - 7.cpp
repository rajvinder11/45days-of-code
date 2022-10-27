#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int max, min;
    cout<<"Enter the elements of array: ";

    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    max = arr[0];
    min =arr[0];

    for(int i=1; i<10; i++){
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"maximun number is: "<<max<<endl;
    cout<<"minimum number is: "<<min<<endl;

    return 0;
}