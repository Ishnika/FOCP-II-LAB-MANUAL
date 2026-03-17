/*Write a C++ program to create a class Rectangle with length and breadth as data members.
Use a constructor to initialize the dimensions and calculate the area of the rectangle.*/
#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    public:
    Rectangle();
    void SetValue(int l,int b);
    int  CalculateArea();
    ~Rectangle();
};
Rectangle::Rectangle()
{
    length=0;
    breadth=0;
}
void Rectangle::SetValue(int l,int b)
{
    length=l;
    breadth=b;
}
int Rectangle::CalculateArea()
{
    int area=length*breadth;
    return area;
}
Rectangle::~Rectangle()
{
    cout<<"\nThe object is destroyed";
}
int main()
{
    Rectangle R1, R2 ;
    cout<<"\nThe area for the first rectangle:"<<R1.CalculateArea();
    R2.SetValue(10,20);
    cout<<"\nThe area of the second rectangle:"<<R2.CalculateArea();
    return 0;
}
