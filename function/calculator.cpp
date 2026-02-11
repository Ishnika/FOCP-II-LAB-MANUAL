/*create a function to design a calculator to perform addition subtraction multiplication and division and each being 
performed in a seperate function*/
#include<iostream>
int addition(int x , int y);
int subtraction(int x,int y);
int multiplication(int x,int y);
float division(int x,int y);
int main()
{
    std::cout<<"\nChoose: 1- for addition 2- for subtraction 3-for multiplication 4-division";
    int choice;
    std::cout<<"\nEnter your choice:";
    std::cin>>choice;
    int a,b;
    std::cout<<"\nEnter the two numbers:";
    std::cin>>a>>b;
    int sum,diff,pro;
    float div;
    switch(choice)
    {
        case 1 : sum=addition(a,b);
                std::cout<<sum;
                break;
        case 2 : diff=subtraction(a,b);
                std::cout<<diff;
                break;
        case 3 : pro= multiplication(a,b);
                std::cout<<pro;
                break;
        case 4 : div=division(a,b);
                std::cout<<div;
                break;
        default: std::cout<<"\nYou mase a wrong choice";
                break;
    }
    return 0;
}
int addition(int x,int y)
{
    int sum=x+y;
    return sum;
}
int subtraction(int x,int y)
{
    int diff;
    if(x>y)
    diff=x-y;
    else
    diff=y-x;
    return diff;
}
int multiplication(int x,int y)
{
    int pro=x*y;
    return pro;
}
float division(int x,int y)
{
    if (y==0)
    {std::cout<<"\nDivision not possible";
    return 0;}
    else
    {
        float div=(float)x/y;
        return div;
    }
}
