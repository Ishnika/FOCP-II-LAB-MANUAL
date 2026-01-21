/*A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to convert Fahrenheit
 temperature into Centigrade or vice versa.*/
 #include<iostream>
 int main()
 {
    int choice;
    std::cout<<"\nenter 1 - convert celcius to fahrenheit\nenter 2 -nconvert fahrenheit to celcius\n\n enter your choice=";
    std::cin>>choice;
    int temp;
    std::cout<<"\n enter the temprature:";
    std::cin>>temp;
    if(choice==1)
    {
        float f =temp*9/5+32;
        std::cout<<"the temprature in fahrenheit is:"<<f;
    }
    else 
    {
        float c =(temp-32)*5/9;
        std::cout<<"the temprature in celsius is:"<<c;
    }
    return 0;
 }
