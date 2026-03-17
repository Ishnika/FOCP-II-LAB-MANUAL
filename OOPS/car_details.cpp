/*Design a class Car that has attributes: brand and price. Write a constructor to assign values
and create two objects to display the details of both cars.*/
#include<iostream>
using namespace std;
class Car
{
    string brand;
    int price ;
    public:
    Car();
    void SetValue(string b,int p);
    void DisplayValue();
    ~Car();
};
Car::Car()
{
    brand="None";
    price=0;
}
void Car::SetValue(string b,int p)
{
    brand=b;
    price=p;
}
void Car::DisplayValue()
{
    cout<<"\nThe brand and price of the car is :"<<brand<<endl<<price;
}
Car::~Car()
{
    cout<<"\nThe object is destroyed";
}
int main()
{
    Car C1,C2;
    C1.DisplayValue();
    C2.SetValue("mahindra",2500000);
    C2.DisplayValue();
    return 0;
}
