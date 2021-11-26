// Practical 9 Task 1 Sub Part
// 26/11 /2021
/*
  WAP which would contain array of objects [many objects], of a class Student. 
  Student [Name, Age, Year, section, marks], the section would be A,B,C and D. 
  Your program would be able to return the total marks of students in the college.
  Hint [Make a Matrix or Tabular diagram to understand the problem], all the rows 
  will differ each other by different objects of Student class [Student s1,s2,s3,s4].
*/
#include <iostream>

using namespace std;
class Student
{
    public :
     string name ;
     int age ;
     int year ;
     char sec ;
     int marks ;
     static int t_marks ;
     void input()
     {
         cout<<"Enter Section : ";
         cin>>sec ;
         cout<<"Enter Name : ";
         cin>>name ;
         cout<<"Enter Year : ";
         cin>>year ;
         cout<<"Enter Age : ";
         cin>>age ;
         cout<<"Enter Marks : ";
         cin>>marks ;
         t_marks+=marks ;
     }
     void show()
     {
         cout<<"Name  : "<<name<<endl;
         cout<<"Sec   : "<<sec<<endl;
         cout<<"Age   : "<<age<<endl;
         cout<<"Year  : "<<year<<endl;
         cout<<"Marks : "<<marks<<endl;
     }
    
};
int Student::t_marks = 0 ;
int main()
{
    int n , i ;
    cout<<"Enter No. of Students : " ;
    cin>>n ;
    Student stu[n] ;
    for(i=0;i<n;i++)
    {
        stu[i].input() ;
    }
    cout<<"\t: Student Details :\n" ;
    for(i=0;i<n;i++)
    {
        stu[i].show() ;
    }
    cout<<"Total Marks of Students is : "<<Student::t_marks ;
    return 0 ;
}
