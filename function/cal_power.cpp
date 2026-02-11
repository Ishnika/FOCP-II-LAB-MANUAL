/*Write a recursive function: int power(int base, int exponent); Do not use built-in power functions.*/
#include<iostream>
int power(int base,int exponent);
int main()
{
    int pow,num;
    std::cout<<"\nEnter the number:";
    std::cin>>num;
    std::cout<<"\nEnter the power:";
    std::cin>>pow;
    int val=power(num,pow);
    std::cout<<"\nThe power of the number is:"<<val;
    return 0;
}
int power(int base,int exponent)
{
    if(exponent==0)
    return 1;
    return base*power(base,exponent-1);
}
