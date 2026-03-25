/*Create a class Account with account number and balance. Add a function displayAccount(). Derive a class SavingsAccount that 
includes interest rate and a function calculateInterest(). Demonstrate usage of both classes*/
#include<iostream>
using namespace std;
class Account
{
    int accountno;
    protected:
    double balance;
    public:
    Account()
    {
         cout<<"\naccount default";
        accountno=0;
        balance=0;
    }
    Account(int a, double b)
    {
        cout<<"\naccount parametrized";
        accountno=a;
        balance =b;
    }
    void displaydetails()
    {
        cout<<"\nAccount no:"<<accountno<<"\nbalance:"<<balance;
    }
};
class SavingAccount:public Account{
    int interest;
    int time;
    public:
    SavingAccount()
    {
        interest=0;
        time=0;
    }
    SavingAccount(int a,double b, int i,int t):Account(a,b)
    {
        interest=i;
        time=t;
    }
    void displaysaving()
    {
        displaydetails();
        cout<<"\ninterest:"<<interest<<"\ntime:"<<time;
    }
    double CalculateInterest()
    {
        int si=float(balance*interest*time)/100;
        return si;
    }
};
int main()
{
    SavingAccount S1,S2(1234,350000,10,5);
    S1.displaysaving();
    cout<<"\nthe interest:"<<S1.CalculateInterest();
    S2.displaysaving();
    cout<<"\nthe interest:"<<S2.CalculateInterest();
    return 0;

}
