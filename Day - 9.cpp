#include<iostream>
using namespace std;

int main()
{
    static int array[3][3];
    int i,j,m,n;

    cout<<"Enter the order of the matrix: ";
    cin>>m>>n;
    cout<<"Enter the coeficients of the matrix: ";

    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
        {
            cin>>array[i][j];
        }
    }
    cout<<"The given matrix is: ";
    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
        {
            cout<<" "<<array[i][j];
        }
    }
    cout<<"Transpose of matrix is\n";
    for (j=0; j<n; ++j)
    {
        for (i=0; i<m; ++i)
        {
           cout<<" "<<array[i][j];
        }
        cout<<"\n";
    }
    return 0;

}