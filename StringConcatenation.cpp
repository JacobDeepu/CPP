#include <iostream>
using namespace std;
class String
{
    private:
        string s;
    public:
        void read();
        String operator +(String);
        void display();
};
void String :: read()
{
    cout<<"Enter the string: ";
    getline(cin,s);
}
void String :: display()
{
    int i=0;
    while(s[i]!='\0')
        cout<<s[i];
}
String String :: operator +(String x)
{
    String z;
    int i=0,j=0;
    while(s[i]!='\0')
    {
        z.s[i]=s[i];
        i++;
    }
    while(x.s[j]!='\0')
    {
        z.s[i]=x.s[j];
        i++;
        j++;
        cout<<z.s[i];
    }
    i=0;
    while(s[i]!='\0')
    {
        cout<<z.s[i];
        i++;
    }
    return z;
}
int main()
{
    String s1,s2,s3;
    s1.read();
    s2.read();
    s3=s1+s2;
    //s3.display();
    return 0;
}