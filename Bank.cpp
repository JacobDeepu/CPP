#include<iostream>
using namespace std;
class bank
{
    private:
    int acc;
    char name[20];
    float bal,dep;
    public:
    bank()
    {
        acc=0;
        bal=0.00;
        dep=0.00;
    }
    void accountnum()
    {
        cout<<"\nEnter the Account number:";
        cin>>acc;
    }
    void input()
    {
        cout<<"\nEnter the Name:";
        cin>>name;
        cout<<"\nEnter first deposit amount:";
        cin>>bal;
        cout<<"\nAccount Created!\n";
    }
    void deposit()
    {
        cout<<"\nEnter the amount to be deposited:";
        cin>>dep;
        bal=bal+dep;
    }
    void withdraw()
    {
        cout<<"Available balance:"<<bal;
        cout<<"\nEnter the amount to withdraw:";
        cin>>dep;
        if(dep<bal)
        {
            bal=bal-dep;
        }
        else
        {
            cout<<"Low balance!";
        }
    }
    void display()
    {
        cout<<"\nAccount number:"<<acc;
        cout<<endl<<"Name:"<<name<<endl<<"Account Balance:"<<bal;
    }
    int check(bank b[])
    {
        for(int i=1;i<10;i++)
        {
            if(acc==b[i].acc)
            {
                return i;
            }
        }
    }
};
int menu()
    {
        int op;
        cout<<"\n1.Create Account\n";
        cout<<"2.Deposit\n";
        cout<<"3.Withdraw\n";
        cout<<"4.Acount details\n";
        cout<<"5.Exit\n";
        cout<<"Choose your Option:";
        cin>>op;
        return op;
    }
int main()
{
    bank b[10];
    int op=1,i=0,a,j;
    while(op!=5)
    {
        op=menu();
        if(op==1)
        {
            i++;
            a=i;
            b[i].accountnum();
            b[i].input();
        }
        else if(op==2)
        {
            j=i=0;
            b[0].accountnum();
            i=b[0].check(b);
            if(i!=j)
            {
                b[i].deposit();
            }
            else
            {
                cout<<"Invalid Account Number\n";
            }
        }
        else if(op==3)
        {
            j=i=0;
            b[0].accountnum();
            i=b[0].check(b);
            if(i!=j)
            {
                b[i].withdraw();
            }
            else
            {
                cout<<"Invalid Account Number\n";
            }
        }
        else if(op==4)
        {
            j=i=0;
            b[0].accountnum();
            i=b[0].check(b);
            if(i!=j)
            {
                b[i].display();
            }
            else
            {
                cout<<"Invalid Account Number\n";
            }
        }
        i=a;
    }
    return 0;
}
