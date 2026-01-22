/*A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to check the 
triangle type based on its sides.*/
#include<iostream>
int main()
{
    int s1,s2,s3;
    std::cout<<"enter the sides:";
    std::cin>>s1>>s2>>s3;
    std::cout<<"the 1st side is="<<s1<<std::endl<<"the 2nd side is:"<<s2<<std::endl<<"the third side is:"<<s3;
    if(s1==s2 &&s2==s3)
    {
        std::cout<<"\nIT IS AN EQUILATERAL TRIANGLE";
    }
    else if(s1!=s2 &&s2!=s3 &&s3!=s1)
    {
        std::cout<<"\n IT IS A SCELENE TRIANGLE";
    }
    else 
    {
        std::cout<<"\nIT IS AN ISOSCELES TRIANGLE";
    }
    return 0;
}
