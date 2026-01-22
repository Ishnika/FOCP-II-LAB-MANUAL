/*A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a solution to calculate 
the roots of a quadratic equation.*/
#include<iostream>
#include<cmath>
int main()
{
    int a,b,c;
    std::cout<<"A quadratic equation is in the form of ax^2+bx+c=0 \n so enter the values od a,b,c:";
    std::cin>>a>>b>>c;
    std::cout<<"the value of a="<<a<<std::endl<<"the value of b is="<<b<<std::endl<<"the value of c is="<<c;
    int d=(b*b)-(4*c*a);
    if(d>=0)
    {
        double r_1=-b+(std::sqrt(d))/2*a;
        double r_2=b-(std::sqrt(d))/2*a;
        std::cout<<"\n the value of the first root is:"<<r_1<<std::endl<<"the value of the second root is:"<<r_2;
    }
    else 
    {
        std::cout<<"\nthere is no real root";
    }
    return 0;
}
