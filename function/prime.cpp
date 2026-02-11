/*create a function bool isprime() to determine if a number is prime or not*/
#include<iostream>
bool isprime(int num);
int main()
{
    int n;
    std::cout<<"Enter the number:";
    std::cin>>n;
   bool result= isprime(n);
   std::cout<<result;
    return 0;
}
bool isprime(int num)
{
    int i;
    int flag=1;
    if (num==2)
    return true;
    else{
    for(i=2;i<=num/2;i++)
    { 
        if(num%i==0)
        {
            flag=0;
            break;
        }
        else
        continue;
    }
    if(flag==1)
    return true;
    else
    return false;
}
}
