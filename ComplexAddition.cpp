#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        void inputComplexNumber();
        void sum(Complex,Complex);
        void display();
        friend Complex sum(Complex,Complex);
};
void Complex :: inputComplexNumber()
{
    cout<<"Enter the Complex number: ";
    cin>>real>>imaginary;
}
void Complex :: display()
{
    if(imaginary>0)
        cout<<"Sum= "<<real<<"+"<<imaginary<<"i"<<endl;
    else
    cout<<"Sum= "<<real<<imaginary<<"i"<<endl;
}
void Complex :: sum(Complex x,Complex y)
{
    real=x.real+y.real;
    imaginary=x.imaginary+y.imaginary;
}
Complex sum(Complex x,Complex y)
{
    Complex z;
    z.real=x.real+y.real;
    z.imaginary=x.imaginary+y.imaginary;
    return z;
}
int main()
{
    Complex c1,c2,c3,c4;
    c1.inputComplexNumber();
    c2.inputComplexNumber();
    c3.sum(c1,c2);
    c3.display();
    c4.sum(c1,c2);
    c4.display();
    return 0;
}