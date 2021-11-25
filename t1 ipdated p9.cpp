// Task 1 : Practical 9 : OOPS 
#include <iostream>

using namespace std;

class Students
{
    
    public :
      string name ;
      int roll ;
      long int phone ;
      string add ;
      
      void input()
      {
          cout<<"Enter Name : ";
          cin>>name ;
          cout<<"Enter Roll No.  : " ;
          cin>>roll ;
          cout<<"Enter Contact No.  : " ;
          cin>>phone;
          cout<<"Enter Address  : " ;
          cin>>add ;
      }
      void display()
      {
          
          cout<<"Name         : "<<name<<endl;
          cout<<"Roll No.     : " <<roll<<endl;
          cout<<"Contact No.  : " <<phone<<endl;
          cout<<"Address      : " <<add<<endl;
      }
      ~Students()
      {
          
      }
};
int main()
{
  
  Students stu1 , stu2 ;
  stu1.input() ;
  stu1.display() ;
  
  stu2.input() ;
  stu2.display() ;
   return 0 ;
}

