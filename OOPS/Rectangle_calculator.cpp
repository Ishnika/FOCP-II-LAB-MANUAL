/*Calculate area and perimeter of a rectangle.*/
#include<iostream>
class Rectangle 
{
    float l,b;
    public:
    void input_dimensions()
    {
        std::cout<<"\nEnter the dimensions of the rectangle :length and breadth:";
        std::cin>>l>>b;
    }
    float calculate_area()
    {
        return l*b ;
    }
    float calculate_perimeter()
    {
        return 2*(l+b);
    }
};
int main()
{
    Rectangle R;
    R.input_dimensions();
    float area=R.calculate_area();
    std::cout<<"\nThe area of the rectangle is:"<<area;
    float per=R.calculate_perimeter();
    std::cout<<"\nThe perimeter of the rectangle is:"<<per;
    return 0;
}
