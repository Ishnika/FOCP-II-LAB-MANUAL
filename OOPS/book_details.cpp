/*Store and display book details.*/
#include<iostream>
class Book
{
    std::string name;
    std::string author;
    int price;
    public:
    void InputDetails()
    {
        std::cout<<"\nenter the deatials :Name of the book , autor and the price:";
        getline(std::cin,name);
        getline(std::cin,author);
        std::cin>>price;
    }
    void DisplayDetails()
    {
        std::cout<<"\nThe name of the book is:"<<name<<"\nThe author of the book is:"<<author<<"\nThe price of the books is:"
        <<price;
    }
};
int main()
{
    Book B;
    B.InputDetails();
    B.DisplayDetails();
    return 0;
}
