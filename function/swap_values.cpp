/*implement a code to swap the values of the variables byt the help of value and reference and demonstrate the difference*/
#include<iostream>
void SwapByValue(int a,int b);
void SwapByReference(int &a,int &b);
int main()
{
    int x;
    std::cout<<"\nEnter the value of the 1st variable:";
    std::cin>>x;
    int y;
    std::cout<<"\nEnter the value of the 2nd variable:";
    std::cin>>y;
    std::cout<<"\nThe values before swaping:"<<x<<" "<<y;
    SwapByValue(x,y);
    std::cout<<"\nThe values after coming out of the function are:"<<x<<" "<<y;
    SwapByReference(x,y);
    std::cout<<"\nThe value after coming out of the function are:"<<x<<" "<<y;
    return 0;
}
void SwapByValue(int a,int b)
{
    std::cout<<"\nTHE VALUES USING THE SWAP BY VALUE FUNCTION:";
    int temp=a;
    a=b;
    b=temp;
    std::cout<<"\nThe values inside the function after swapping are:"<<a<<" "<<b;
}
void SwapByReference(int &a,int &b)
{
    std::cout<<"\nTHE VALUES UDING THE SWAP BY REFERENCE FUNCTION";
    int temp=a;
    a=b;
    b=temp;
    std::cout<<"\nThe values inside the function after swapping are:"<<a<<" "<<b;
}
