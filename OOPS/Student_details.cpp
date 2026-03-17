/*Create a class Student with data members: name and marks. Use a constructor to initialize the values and display the
 student details using a member function.*/
 #include<iostream>
 using namespace std;
 class Student
 {
    string name;
    int marks;
    public://declared  2 methods and a default constructor with a destructor 
    Student();
    void InputDetails();
    void DisplayDetails();
    ~Student();
 };
 //defined the methods Student assigns the default values InputDetails inputs the values and DisplayDetails displays the value
 //finallt the destructor is used to destroy the ojects 
 Student::Student()
 {
    name="none";
    marks=0;
 }
 void Student::InputDetails()
 {
    cout<<"\nEnter the name:";
    getline(cin,name);
    cout<<"\nEnter the marks:";
    cin>>marks;
 }
 void Student::DisplayDetails()
 {
    cout<<"\nThe name and the marks are:"<<name<<endl<<marks;
 }
 Student::~Student()
 {
    cout<<"\nThe object is distroyed";
 }
 int main()
 {
    //s1 to show the default values and s2 for the values after inputing 
    Student S1;
    Student S2;
    cout<<"\nThe values using default operator";
    S1.DisplayDetails();
    cout<<"\nThe values after inputing the values:";
    S2.InputDetails();
    S2.DisplayDetails();
    return 0;
 }
