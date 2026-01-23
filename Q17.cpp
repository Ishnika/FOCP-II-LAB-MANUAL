/*A learning application analyzes numbers for mathematical properties.Design a solution to check whether a given number is a
Perfect number or an Armstrong number.*/
#include<iostream>
#include<cmath>
int main()
{
    int num;
    std::cout<<"enter the number:";
    std::cin>>num;
    int i,sum_p=0,num_copy=num,sum_a=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum_p+=i;
        }
    }
    int digits=0;
    while(num_copy>0)
    {
        digits++;
        num_copy/=10;
    }
    num_copy=num;
    while(num_copy>0)
    {
        int rem=num_copy%10;
        sum_a+=pow(rem,digits);
        num_copy/=10;
    }
    if(sum_a==num && sum_p==num)
    {
        std::cout<<"\nTHE NUMBER IS BOTH ARMSTRONG AND PERFECT";
    }
    else if(sum_p==num)
    {
        std::cout<<"\nIT IS A PERFECT NUMBER";
    }
    else if(sum_a==num)
    {
        std::cout<<"\nIT IS AN ARMSTRONG NUMBER";
    }
    else 
    {
        std::cout<<"\nTHE NUMBER IS NEITHER ARMSTRONG NOR PERFECT";
    }
    return 0;
}
