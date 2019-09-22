#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        void inputComplexNumber();
        Complex sum(Complex,Complex);
        void outputComplexNumber();
};
void Complex :: inputComplexNumber()
{
    cout<<"Enter the Complex number: ";
    cin>>real>>imaginary;
}
void Complex :: outputComplexNumber()
{
    if(imaginary>0)
        cout<<real<<"+"<<imaginary<<"i";
    else
    cout<<real<<imaginary<<"i";
}
Complex Complex :: sum(Complex x,Complex y)
{
    real=x.real+y.real;
    imaginary=x.imaginary+y.imaginary;
}
int main()
{
    Complex c1,c2,c3;
    c1.inputComplexNumber();
    c2.inputComplexNumber();
    c3.sum(c1,c2);
    c3.outputComplexNumber();
    return 0;
}