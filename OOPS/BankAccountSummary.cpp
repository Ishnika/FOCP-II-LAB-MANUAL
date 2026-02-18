/*Store account details and display balance*/
#include<iostream>
class BankAccount 
{
    std::string name;
    int acc_no;
    double bal;
    public:
    double amt_dep;
    double amt_with;
    void inputDetails()
    {
        std::cout<<"\nEnter the bank details: name , account number , balance:";
        std::cin>>name>>acc_no>>bal;
    }
    void displayDetails()
    {
        std::cout<<"The details of the bank account are as follows:"<<"\n account holder name:"<<name<<"\nThe account number:"
        <<acc_no<<"\nThe balance of the account:"<<bal;
    }
    void deposit()
    {
        std::cout<<"\nEnter the amnount to be depositted :";
        std::cin>>amt_dep;
    }
    void withdraw()
    {
        std::cout<<"\nEnter the amount to be withdrawn:";
        std::cin>>amt_with;
    }
};
int main()
{
   BankAccount B;
   B.inputDetails();
   B.displayDetails();
   B.deposit();
   B.withdraw();
   return 0;
}
