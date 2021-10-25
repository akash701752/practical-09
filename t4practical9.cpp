// Task 4 : Practical 9 : To Use Copy Constructor
#include <iostream>

using namespace std;

class ABC
{
    private :
       int a   ;
    public :
      ABC()
      {
          cout<<"This is Constructor of Base Class " << endl ;
      }
      void setA(int b) // Setter
      {
          a = b ; // Setting the Private Variable a Using Setter
      }
      int getA() // Getter
      {
          return a ;
      }
      ABC (ABC &obj1) // Copy Constructor
      {
          a = obj1.a ;
      }
     ~ABC()
     {
         cout<<"This is the Destructor of Base Class " <<endl ;
     }
};

int main()
{
    ABC obj1 , obj2 ; // Creating Object  Constructor will Called When an Object is Created 
    int num1  ;
    cout<<"Enter the Value of A : " ;
    cin>>num1;
    obj1.setA(num1) ; // Setting the Value of Private Variable of Class Using Setter 
    obj2 = obj1 ;
    cout<<"The  Value  of      Object 1 is : "<<obj1.getA() << endl ; // Getting the Value of a and b using Getter Function
    cout<<"The Copied Value of Object 2 is : "<<obj2.getA() << endl ;

    return 0;
}
