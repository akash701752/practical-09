// Practical 9 
// This is Actual Task 3 of Practical 9 According to the Lab Manual
// Task 3 : To Use Static data Member to count Object 
#include <iostream>
using namespace std ;

class ABC
{
    public :
      static int x ;
      ABC() // Every time object is Created x get updated 
      {
          x++ ;
      }
      void show()
      {
          cout<<x ;
      }
};

int ABC::x = 0 ; // Initilisation of Static Variable

int main()
{
    cout<<"\t\tAkash Yadav 200111076 "<<endl<<endl ;
    ABC obja , objb , objc , objd ;
    cout<<"The Value of X or Objects Created is : " ;
    objc.show() ; // It will print the value of Static int 
    return 0 ;
}
