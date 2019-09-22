#include<iostream>
using namespace std;
class Geometric
{
    private:
        int length,breadth,ar;
        float height,radius,a;
    public:
        Geometric();
        void area(float);
        void area(int,int);
        void area(int);
        void area(float,int);
};
Geometric :: Geometric()
{
    length=0;
    breadth=0;
    ar=0;
    height=0.0;
    radius=0.0;
    a=0.0;
}
void Geometric :: area(float radius)
{
    a=3.14*radius*radius;
    cout<<"Area of Circle= "<<a<<endl;
}
void Geometric :: area(int length,int breadth)
{
    ar=length*breadth;
    cout<<"Area of Rectangle= "<<ar<<endl;
}
void Geometric :: area(int length)
{
    ar=length*length;
    cout<<"Area of Square= "<<ar<<endl;
}
void Geometric :: area(float height,int breadth)
{
    a=0.5*height*breadth;
    cout<<"Area of Triangle= "<<a<<endl;
}
int main()
{
    int choice,length,breadth;
    float radius,height;
    while(true)
    {
        Geometric g;
        cout<<"**************************"<<endl;
        cout<<"  1. Area of Circle."<<endl;
        cout<<"  2. Area of Rectangle."<<endl;
        cout<<"  3. Area of Triangle."<<endl;
        cout<<"  4. Area of Square."<<endl;
        cout<<"  5. Exit."<<endl;
        cout<<"**** Enter the choice ****"<<endl;
        cin>>choice;
        if(choice==1)
        {
            cout<<"Enter the Radius of the circle:";
            cin>>radius;
            g.area(radius);
        }
        else if(choice==2)
        {
            cout<<"Enter the Length and Breadth of Rectangle:";
            cin>>length>>breadth;
            g.area(length,breadth);
        }
        else if(choice==3)
        {
            cout<<"Enter the Height and Breadth of Triangle:";
            cin>>height>>breadth;
            g.area(height,breadth);
        }
        else if(choice==4)
        {
            cout<<"Enter the length of the side:";
            cin>>length;
            g.area(length);
        }
        else if(choice==5)
            break;
        else
            cout<<"Invalid choice"<<endl;
    }
}