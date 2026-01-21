/*An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute the area of a 
circle.*/
#include<iostream>
#include<iomanip>
int main()
{
    int r ;
    std::cout<<"\nenter the radius of the circle:";
    std::cin>>r;
    float area=3.14*r*r;
    std::cout<<"\nthe area of the circle is:"<<area;
    return 0;
}
