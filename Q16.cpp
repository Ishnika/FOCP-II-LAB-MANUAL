/*A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to accept a number and check 
whether it is prime.*/
#include<iostream>
int main()
{
    int num;
    std::cout<<"enter a number:";
    std::cin>>num;
    int i,flag=0;
    if(num==1)
    std::cout<<"it is a unique number";
    else if(num==0)
    {
        std::cout<<"enter a valid number";
    }
    else 
    {
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                flag=1;
            }
        }
        if(flag==1)
        std::cout<<"The number is composite";
        else 
        std::cout<<"The number is prime";
    }
    return 0;
}
