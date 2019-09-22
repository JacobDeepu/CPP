#include<iostream>
using namespace std;
class StringLength
{
    private:
        string s1;
        int length;
    public:
        StringLength();
        void inputString();
        void findLength();
        void outputLength();
};
StringLength :: StringLength()
{
    length=0;
}
void StringLength :: inputString()
{
    cout<<"Enter the string: ";
    getline(cin,s1);
}
void StringLength :: findLength()
{
    while(s1[length]!='\0')
        length++;
}
void StringLength :: outputLength()
{
    cout<<"Length of string = "<<length;
}
int main()
{
    StringLength s;
    s.inputString();
    s.findLength();
    s.outputLength();
    return 0;
}