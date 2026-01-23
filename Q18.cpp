/*A String-matching tool validates if IDs are palindromes. Implement a solution to check whether a given ID is a palindrome.*/
#include<iostream>
#include<cmath>
int main()
{
    int id;
    std::cout<<"enter the ID:";
    std::cin>>id;
    int i;
    int id_copy=id;
    int sum=0;
    while(id_copy>0)
    {
        int rem=id_copy%10;
        sum=sum*10+rem;
        id_copy/=10;
    }
    if(sum==id)
    {
        std::cout<<"IT IS A PALLINDROME";
    }
    else 
    {
        std::cout<<"IT IS NOT A PALLINDROME";
    }
    return 0;
}
