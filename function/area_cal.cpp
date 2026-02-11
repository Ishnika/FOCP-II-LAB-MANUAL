/*calculate the area of a circle , rectangle or triangle*/
#include<iostream>
float AreaCircle(int r);
float AreaRectangle(int l,int b);
float AreaTriangle(int h,int b);
int main()
{
    std::cout<<"\nCHOOSE: 1- for circle 2-for rectangle 3- for triangle";
    int choice;
    std::cout<<"\nEnter your choice:";
    std::cin>>choice;
    float area;
    switch(choice)
    {
        case 1 :int rad;
                std::cout<<"\nEnter the radius of the circle:";
                std::cin>>rad;
                area=AreaCircle(rad);
                std::cout<<"\nThe area is:"<<area;
                break;
        case 2 :int len,wid;
                std::cout<<"\nEnter the length and breadth:";
                std::cin>>len>>wid;
                area=AreaRectangle(len,wid);
                std::cout<<"\nThe area is:"<<area;
                break;
        case 3: int height,base;
                std::cout<<"\nEnter the base and height:";
                std::cin>>height>>base;
                area=AreaTriangle(height,base);
                std::cout<<"\nThe area is:"<<area;
                break;
        default:std::cout<<"\nThe choice made is invalid:";
                break;
    }
    return 0;
}
float AreaCircle(int r)
{
    float area=3.14*r*r;
    return area;
}
float AreaRectangle(int l,int b)
{
    float area=l*b;
    return area;
}
float AreaTriangle(int h,int b)
{
    float area=0.5*b*h;
    return area;
}
