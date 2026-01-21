/*A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase. Implement a solution 
to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.*/
#include<iostream>
#include<iomanip>
int main()
{
    int i_no,quan,price;
    std::cout<<"\nenter the item number,quantity and price=";
    std::cin>>i_no>>quan>>price;
    float tot_amt=quan*price*0.8;
    std::cout<<"\nTHE BILL IS\n\nitem no.="<<std::setw(10)<<i_no<<"\nquantity of items="<<std::setw(10)<<quan<<
    "\nprice of the item="<<std::setw(10)<<price<<"\n\nTHE TOTAL AMOUNT TO BE PAID:"<<tot_amt;
    return 0 ;
}
