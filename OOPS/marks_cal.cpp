/*Store and display student details along with total marks.*/
#include<iostream>
class Student
{
    int rollno;
    std::string name;
    int m1;
    int m2;
    int m3;
    public:
    void input_details()
    {
        std::cout<<"\nEnter the roll no,name,marks 1 , marks 2 ,marks 3:";
        std::cin>>rollno>>name>>m1>>m2>>m3;
    }
    float calculate()
    {
        int sum=m1+m2+m3;
        return sum;
    }
    void display_details()
    {
        std::cout<<"the details are as follows:"<<rollno<<std::endl<<name<<std::endl<<m1<<std::endl<<m2<<std::endl<<m3;
    }
};
int main()
{
    Student S;
    S.input_details();
    int sum=S.calculate();
    std::cout<<"\nThe sum of the marks is:"<<sum<<std::endl;
    S.display_details();
    return 0;
}
