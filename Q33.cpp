/* A grading system stores marks of multiple students in arrays. Implement a solution to accept marks in 5 subjects for 3 
students, then display:• marks in 2nd subject of 1st student, and• marks in 5th subject of 3rd student.*/
#include<iostream>
int main()
{
    int arr[3][5];
    int i,j;
    for(i=0;i<3;i++)
    {
        std::cout<<"\nENTER THE MARKS THE "<<i+1<<"STUDENT:";
        for(j=0;j<5;j++)
        {
            std::cout<<"\nenter the marks of "<<j+1<<"suject:";
            std::cin>>arr[i][j];
        }
    }
    std::cout<<"\nTHE MARKS OF THE 1ST STUDENTS 2ND SUBJECT IS:"<<arr[1][0]<<"\nTHE MARKS OF THE 3RD STUDENTS 5TH SUBJECT IS:"
    <<arr[2][4];
    return 0; 
}
