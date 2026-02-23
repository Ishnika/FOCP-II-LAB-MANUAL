/*Convert Celsius to Fahrenheit.*/
#include<iostream>
class Temprature 
{
    float temp;
    public:
    void InputDetails()
    {
        std::cout<<"\nEnter the temprature in celcius:";
        std::cin>>temp;
    }
    float CalculateTemprature()
    {
        return temp*1.8+32;
    }
    void DisplayDetails()
    {
        std::cout<<"\nThe temprature in fahrenheit is :"<<CalculateTemprature();
    }
};
int main()
{
    Temprature T;
    T.InputDetails();
    T.DisplayDetails();
    return 0;
