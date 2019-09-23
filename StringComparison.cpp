#include <iostream>
using namespace std;
class String
{
    private:
        string s;
        int length;
    public:
        String();
        void read();
        void operator ==(String);
};
String :: String()
{
    length=0;
}
void String :: read()
{
    cout<<"Enter the string: ";
    getline(cin,s);
    while(s[length]!='\0')
        length++;
}
void String :: operator ==(String x)
{
    int i=0;
    if(length==x.length)
    {
        while(s[i]==x.s[i] && s[i]!='\0')
            i++;
        if(i==length)
            cout<<"Strings are equal";
        else
            cout<<"Strings are not equal";
    }
    else
        cout<<"Strings are not equal";
}
int main()
{
    String s1,s2;
    s1.read();
    s2.read();
    s1==s2;
    return 0;
}