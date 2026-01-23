/*The school report card system stores subject marks for each student.Implement a solution to accept marks in 5 subjects, 
compute the total and percentage, and display the result.*/
#include<iostream>
int main()
{
    int s1,s2,s3,s4,s5;
    std::cout<<"Enter the marks of all the subjects:";
    std::cin>>s1>>s2>>s3>>s4>>s5;
    std::cout<<"\nMarks of the 1st subject is="<<s1<<"\nMarks of the 2nd subject is="<<s2<<"\nMarks of the 3rd subject is="<<s3
    <<"\nMarks of the 4th suject is:"<<s4<<"\nMarks of the 5th subject is:"<<s5;
    int total=s1+s2+s3+s4+s5;
    float per=(float)total/5;
    std::cout<<"\nThe total of the marks is :"<<total;
    std::cout<<"\nThe percentage is:"<<per;
    return 0;
}
