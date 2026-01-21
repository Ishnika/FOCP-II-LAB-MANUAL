/*A student wants to swap the values of two variables for practising coding basics. Implement a solution to swap two numbers 
using different techniques.*/
#include<iostream>
int main()
{
    int choice ;
    std::cout<<"\nCHOOSE:\n1-to swap using a counter variable\n2-to swap using add or sub\n3-to swap using mul and div";
    std::cout<<"\nENTER YOUR CHOICE:";
    std::cin>>choice;
    if(choice>3 || choice <1)
    {
        std::cout<<"\n you have enter an invalid choice enter a valid choice";
    }
    else 
    {
        int num_1,num_2;
        std::cout<<"\nenter the value of the numbers:";
        std::cin>>num_1>>num_2;
        std::cout<<"\nTHE VALUES OF THE NUMBERS BEFORE SWAPPING:\n";
        std::cout<<"\nthe first number is:"<<num_1<<std::endl<<"the second number is:"<<num_2;
        if(choice==1)
        {
            int count;
            count=num_1;
            num_1=num_2;
            num_2=count;
            std::cout<<"\n\nTHE VALUES OF THE NUMBERS AFTER SWAPPING:\n";
            std::cout<<"\nthe value of the first number is:"<<num_1<<"\nthe value of the second number is:"<<num_2;
        }
        else if(choice==2)
        {
            num_1+=num_2;
            num_2=num_1-num_2;
            num_1-=num_2;
            std::cout<<"\nthe value of the first number is:"<<num_1<<"\nthe value of the second number is:"<<num_2;
        }
        else
        {
            if(num_1==0 || num_2==0)
            {
                std::cout<<"\nthe number for this method shoulde not be zero enter non zero values";
            }
            else 
            {
                num_1*=num_2;
                num_2=num_1/num_2;
                num_1/=num_2;
                std::cout<<"\nthe value of the first number is:"<<num_1<<"\nthe value of the second number is:"<<num_2;
            }
        }
    }
    return 0;
}
