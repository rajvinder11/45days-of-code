#include<iostream>
using namespace std;

class complex
{
    public:
    int real, imag;
    
    void setvalue()
    {
        cin>>real;
        cin>>imag;
    }

    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    void sum(complex c1, complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
        
    }
};
int main()
{
    complex c1, c2, c3;
    cout<<"enter real and imaginary part of first complex number: "<<endl;
    c1.setvalue();
    cout<<"enter real and imaginary part of second complex number: "<<endl;
    c2.setvalue();
    c3.sum(c1,c2);
    c3.display();

    return 0;
}