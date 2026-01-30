/*A security system generates list of prime keys within given range. Implement a solution to display all
prime numbers between two limits.
A web-based application enforces strong password policies during user registration to improve account security.
The system requires that every password must satisfy the following conditions:
• Contain at least one uppercase letter (A–Z)
• Contain at least one lowercase letter (a–z)
• Contain at least one digit (0–9)
• Contain at least one special character from the set
@ # $ % ! & *
You are required to develop the code so that the password validation logic can be implemented in the application.*/
#include<iostream>
#include<string>
int main()
{
    std::string str;
    std::cout<<"ENTER THE PASSWORD:";
    std::cin>>str;
    bool is_upper=false,is_lower=false,is_char=false,is_digit=false;
    for(char c:str)
    {
        if(isupper(c))
        is_upper=true;
        else if(islower(c))
        is_lower=true;
        else if(isdigit(c))
        is_digit=true;
        else 
        is_char=true;
    }
    if(is_upper && is_lower && is_digit && is_char)
    std::cout<<"\nTHE PASSWORD IS VALID";
    else 
    std::cout<<"\nINVALID PASSWORD! ENTER A SAFER PASSWORD";
    return 0 ;
}
