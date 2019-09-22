#include<iostream>
using namespace std;
class Minus
{
    private:
        int a;
    public:
        void inputNumber();
        void display();
        friend Minus operator -(Minus);
        friend Minus operator -(Minus,Minus);
};
void Minus :: inputNumber()
{
    cout<<"Enter the number: ";
    cin>>a;
}
void Minus :: display()
{
    cout<<a<<endl;
}
Minus operator -(Minus x)
{
    Minus z;
    z.a=-x.a;
    return z;
}
Minus operator -(Minus x,Minus y)
{
    Minus z;
    z.a=x.a-y.a;
    return z;
}
int main()
{
    Minus m1,m2,m3;
    m1.inputNumber();
    m2.inputNumber();
    m3=-m1;
    m3.display();
    m3=m1-m2;
    m3.display();
    return 0;
}