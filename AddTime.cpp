#include<iostream>
using namespace std;
class Mytime
{
    private:
        int hr,min,sec;
    public:
        Mytime();
        void inputTime();
        Mytime operator +(Mytime);
        void outputTime();
};
Mytime :: Mytime()
{
    hr=0;
    min=0;
    sec=0;
}
void Mytime :: inputTime()
{
    cout<<"Enter the time:";
    cin>>hr>>min>>sec;
}
void Mytime :: outputTime()
{
    cout<<hr<<" : "<<min<<" : "<<sec;
}
Mytime Mytime :: operator +(Mytime x)
{
    Mytime z;
    z.sec=sec+x.sec;
    if(z.sec >= 60)
    {
        z.min++;
        z.sec=z.sec-60;
    }
    z.min=z.min+min+x.min;
    if(z.min >= 60)
    {
        z.hr++;
        z.min=z.min-60;
    }
    z.hr=z.hr+hr+x.hr;
    return z;
}
int main()
{
    Mytime t1,t2,t3;
    t1.inputTime();
    t2.inputTime();
    t3=t1+t2;
    t3.outputTime();
    return 0;
}