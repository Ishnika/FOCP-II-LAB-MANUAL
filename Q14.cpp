/*Develop a menu-driven calculator program in C++ to perform basic arithmetic operations.The program should continue executing
 based on the user's choice and display the result of each operation.*/
 #include<iostream>
 int main()
 {
    std::cout<<"\nENTER: 1.to add two numbers\n2.tonsubtract two numbers\n3.to multiply two numbers\n4.to divide two numbers";
    int choice;
    std::cout<<"\nenter your choice:";
    std::cin>>choice;
    int num_1,num_2;
    std::cout<<"\nenter the first number:";
    std::cin>>num_1;
    std::cout<<"\nenter the second number:";
    std::cin>>num_2;
    if(choice==1)
    {
        int sum=num_1+num_2;
        std::cout<<"\nThe sum of the numbers is:"<<sum;
    }
    else if(choice==2)
    {   
        int diff;
        if(num_1>num_2)
        diff=num_1-num_2;
        else 
        diff=num_2-num_1;
        std::cout<<"\nThe difference of the numbers is :"<<diff;
    }
    else if(choice==3)
    {
        int prod=num_1*num_2;
        std::cout<<"\nThe product of the numbers is:"<<prod;
    }
    else if(choice==4)
    {
        if(num_2==0)
        {
            std::cout<<"\nproduct is undefined please enter a new a non-zero number as denominator";
        }
        else 
        {
            float div=(float)num_1/num_2;
            std::cout<<"\nthe quitent is :"<<div;
        }
    }
    else 
    {
        std::cout<<"\n It is an incorrect choice enter a correct choice";
    }
    return 0;
 }
