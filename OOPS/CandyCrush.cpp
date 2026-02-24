//Candy crush game question where we need to display the colour and points of the candy 
#include<iostream>
class Candy
{
    std::string colour;
    int points;
    public:
    void setCandy(std::string c, int p)
    {
        colour =c;
        points =p;
    }
    void displayCandy()
    {
        std::cout<<"\nThe colour of the candy is:"<<colour;
        std::cout<<"\nThe points of the candy are :"<<points;
    }
};
int main()
{
    Candy Candy1;
    Candy Candy2;
    std::string col1,col2;
    int pt1,pt2;
    std::cout<<"\nEnter the colour of both the candies:";
    std::cin>>col1>>col2;
    std::cout<<"\nEnter the points of both the candies:";
    std::cin>>pt1>>pt2;
    Candy1.setCandy(col1,pt1);
    Candy2.setCandy(col2,pt2);
    Candy1.displayCandy();
    Candy2.displayCandy();
    return 0;
}
