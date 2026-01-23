/*A network security system generates prime numbers in a range for encryption key pools. Implement a solution to find all
prime numbers within a given range.*/
#include<iostream>
int main()
{
    int num;
    std::cout<<"enter the number:";
    std::cin>>num;
    int i;
    for(i=2;i<=num;i++)
    {
        int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            flag=1;
        }
        if(flag==0)
        {
            std::cout<<std::endl<<i<<" is prime ";
        }
    }
    return 0;
}
