/*A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total expenses and 
apply a discount accordingly.*/
#include<iostream>
int main()
{
    int no_it,price,quan;
    std::cout<<"enter the item number,price,quantity:";
    std::cin>>no_it>>price>>quan;
    float amt=(price*quan)*0.9;
    std::cout<<"Item number is :"<<no_it<<std::endl<<"price of the item:"<<price<<std::endl<<"enter the quantity of items:"
    <<quan<<std::endl<<"\n\nDISCOUNTED PRICE="<<amt;
    return 0;
}
