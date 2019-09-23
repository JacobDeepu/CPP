#include <iostream>
using namespace std;
class Swap
{
	private:
		int a,b;
	public:
        void by_value(int,int);
        void by_ref(int &a,int &b);
};
void Swap :: by_value(int a,int b)
{
	a=a+b;
    b=a-b;
    a=a-b;
	cout<<"Numbers after swaping:"<<endl;
	cout<<"Call by value..\n";
	cout<<"a="<<a<<",b="<<b<<endl;
}
void Swap :: by_ref(int &a,int &b)
{
	a=a+b;
    b=a-b;
    a=a-b;
	cout<<"Call by ref..\n";
	cout<<"a="<<a<<",b="<<b<<endl;
}
int main()
{
    int x,y;
	Swap s;
    cout<<"Enter two values:";
	cin>>x>>y;
	cout<<"Numbers before swaping:a="<<x<<",b="<<y<<endl;
    s.by_value(x,y);
	s.by_ref(x,y);
    return 0;
}