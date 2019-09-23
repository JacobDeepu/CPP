#include<iostream>
using namespace std;
class Minus
{
    private:
        int a;
    public:
        void inputNumber();
        void display();
        Minus operator -();
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
Minus Minus :: operator -()
{
    Minus z;
    z.a=-a;
    return z;
}
int main()
{
    Minus m1,m2;
    m1.inputNumber();
    m2=-m1;
    m2.display();
    return 0;
}

//Unary "-" friend function
/*
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
int main()
{
    Minus m1,m2;
    m1.inputNumber();
    m2=-m1;
    m2.display();
    return 0;
}*/