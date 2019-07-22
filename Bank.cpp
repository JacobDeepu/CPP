#include<iostream>
using namespace std;
class bank
{
    private:
    int account_num;
    char name[20];
    float balance,amount;
    public:
    void getaccountnumber()
    {
        cout<<"\nEnter the Account number:";
        cin>>account_num;
    }
    void input_details()
    {
        cout<<"\nEnter the Name:";
        cin>>name;
        cout<<"\nEnter Initial Deposit:";
        cin>>bal;
        cout<<"\n\tAccount Created\n";
    }
    void deposit_money()
    {
        cout<<"\nEnter the Deposit Amount:";
        cin>>amount;
        balance+=amount;
    }
    void withdraw_money()
    {
        cout<<"Available balance:"<<balance;
        cout<<"\nEnter the Amount to withdraw:";
        cin>>amount;
        if(amount>balance)
        {
            balance-=amount;
        }
        else
        {
            cout<<"\tLow balance!";
        }
    }
    void display_details()
    {
        cout<<"\nAccount number:"<<account_num;
        cout<<"\nName:"<<name;
	cout<<"\nAccount Balance:"<<balance;
    }
    int check_accountnum(bank b[])
    {
        for(int i=1;i<10;i++)
        {
            if(account_num==b[i].account_num)
            {
                return i;
            }
        }
    }
};
int menu()
    {
        int option;
        cout<<"\n1.Create Account\n";
        cout<<"2.Deposit\n";
        cout<<"3.Withdraw\n";
        cout<<"4.Acount details\n";
        cout<<"5.Exit\n";
        cout<<"Choose your Option:";
        cin>>option;
        return option;
    }
int main()
{
    bank b[10];
    int option=1;
    int i=0,a;
    while(option!=5)
    {
        option=menu();
        if(option==1)
        {
            i++;
            a=i;
            b[i].getaccountnumber();
            b[i].input_details();
        }
        else if(option==2)
        {
            j=i=0;
            b[0].accountnum();
            i=b[0].check_accountnum(b);
            if(i!=0)
            {
                b[i].deposit_money();
            }
            else
            {
                cout<<"\tInvalid Account Number\n";
            }
        }
        else if(option==3)
        {
            i=0;
            b[0].getaccountnumber();
            i=b[0].check_accountnum(b);
            if(i!=0)
            {
                b[i].withdraw_money();
            }
            else
            {
                cout<<"\tInvalid Account Number\n";
            }
        }
        else if(option==4)
        {
            i=0;
            b[0].getaccountnumber();
            i=b[0].check_accountnum(b);
            if(i!=0)
            {
                b[i].display_details();
            }
            else
            {
                cout<<"\tInvalid Account Number\n";
            }
        }
        i=a;
    }
    return 0;
}
