#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        void getvalue();
        void display();
        Complex operator -(Complex);
};
void Complex :: getvalue()
{
    cout<<"Enter the Complex number: ";
    cin>>real>>imaginary;
}
void Complex :: display()
{
    if(imaginary>=0)
        cout<<"Sum= "<<real<<"+"<<imaginary<<"i"<<endl;
    else
    cout<<"Sum= "<<real<<imaginary<<"i"<<endl;
}
Complex Complex :: operator -(Complex x)
{
    Complex z;
    z.real=real - x.real;
    z.imaginary=imaginary - x.imaginary;
    return z;
}
int main()
{
    Complex c1,c2,c3;
    c1.getvalue();
    c2.getvalue();
    c3=c1-c2;
    c3.display();
    return 0;
}
//friend function
/*
#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        void getvalue();
        void display();
        friend Complex operator -(Complex,Complex);
};
void Complex :: getvalue()
{
    cout<<"Enter the Complex number: ";
    cin>>real>>imaginary;
}
void Complex :: display()
{
    if(imaginary>=0)
        cout<<"Sum= "<<real<<"+"<<imaginary<<"i"<<endl;
    else
    cout<<"Sum= "<<real<<imaginary<<"i"<<endl;
}
Complex operator -(Complex x,Complex y)
{
    Complex z;
    z.real=x.real - y.real;
    z.imaginary=x.imaginary - y.imaginary;
    return z;
}
int main()
{
    Complex c1,c2,c3;
    c1.getvalue();
    c2.getvalue();
    c3=c1-c2;
    c3.display();
    return 0;
}*/