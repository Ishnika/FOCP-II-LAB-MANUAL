/*A registration system rejects usernames that contain spaces or special characters. Write a C++
program to validate whether a given string can be accepted as a username.*/
#include<iostream>
int main()
{
    std::string str;
    std::cout<<"ENTER THE STRING:";
    getline(std::cin,str);
    int flag=1;
    for(char c:str)
    {
        if(c==' ')
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    std::cout<<"\nValid password";
    else 
    std::cout<<"\nInvalid password";
    return 0;
}
