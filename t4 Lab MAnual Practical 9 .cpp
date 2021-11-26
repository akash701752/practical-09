// Task 4 To Use friend Function
// PRACTICAL 9 
// 26/11 /2021
#include<iostream>
#include<cstring>
using namespace std ;
class Students
{
    public :
     string name ;
     int roll ;
     int age ;
     int marks ;
     static int t_marks ;
     friend void input(Students &) ;
     void display()
     {
         cout<<"Name     : "<<name <<endl ;
         cout<<"Roll No. : "<<roll <<endl ;
         cout<<"Age      : "<<age <<endl ;
         cout<<"Marks    : "<<marks <<endl <<endl ;
     } 
};
int Students::t_marks = 0 ;
void input(Students &s)
{ 
    cout<<"Enter Name : " ;
    cin>>s.name ;
    cout<<"Enter Roll No. : " ;
    cin>>s.roll ;
    cout<<"Enter Age : " ;
    cin>>s.age ;
    cout<<"Enter Marks : " ;
    cin>>s.marks ;
    s.t_marks+= s.marks ;
}
int main()
{
    int n , i ;
    cout<<"Enter Number Students : " ;
    cin>>n ;
    Students stu[n] ;
    for(i=0;i<n;i++)
    {
        input(stu[i]) ;
    }
    cout<<"\t Students Details : \n" ;
    for(i=0;i<n;i++)
    {
        stu[i].display() ;
    }
    cout<<"Total Marks of Students is : "<<Students::t_marks <<endl;
    return 0 ;
}
