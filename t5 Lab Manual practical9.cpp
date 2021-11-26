// Practical 9 

// Task 6 : Program to create College class and Student Structure in C++ in one program.

/*
  The Difference between Class and Structure
  Class :
    1. Class is a collection of Data Members , Member functions and Access Specifiers.
    2. Class provides security by the means of Access Specifiers
    3. Class have the quality of Data Hiding which is also by the means of Access Specifiers or Scope Specifiers
    4. Class is Complex as it involves Heap Memory
    5. Class is Slower as compared to Structure .
  Structure :
    1. Structure is a collection of Data Members , Member functions .
    2. Structure does not provides security as they don't have Access Specifiers .
    3. Strucure does not have the quality of Data Hiding as they don't have Access Specifiers .
    4. Structure uses Stack Memory .
    5. Structure is faster as comapred to Class because of Stack .
*/
#include <iostream>
using namespace std ;

struct student
{
    char name[10] ;
    int roll_no ;
    int marks ;
};
class College
{
    public :
      char sec ;
      int nos ; // Number of Student
      void enter()
      {
          cout<<"Enter Section Name : ";
          cin>>sec ;
          cout<<"Enter Number of Students : ";
          cin>>nos ;
      }
       void show()
       {
           cout<<"\t\tSTUDENT DETAILS \n\n" ;
           cout<<"Name of Section : "<<sec <<endl;
           cout<<"No. of Students : "<<nos <<endl;
       }
};

int main()
{
    cout<<"\t\tAkash Yadav 200111076 "<<endl<<endl ;
    College  sec_A ;
    sec_A.enter() ;
    struct student s[sec_A.nos] ;
    int i ;
    for(i=0;i<sec_A.nos;i++)
    {
        cout<<"Enter Student "<<i+1 <<" Name : ";
        cin>>s[i].name ;
        cout<<"Enter Student "<<i+1 <<" Roll No. : ";
        cin>>s[i].roll_no;
        cout<<"Enter Student "<<i+1 <<" Marks : ";
        cin>>s[i].marks ;
    }
    cout<<"\n\n" ;
    sec_A.show() ;
    for(i=0;i<sec_A.nos;i++)
    {
        cout<<"Name     : "<<s[i].name <<endl;
        cout<<"Roll No. : "<<s[i].roll_no <<endl ;
        cout<<"Marks    : "<<s[i].marks <<endl<<endl;
    }
    return 0 ;
}
