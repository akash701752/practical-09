// Task 2 : Practical 9 : To Call a Constructor 
#include <iostream>

using namespace std;

class Area
{
    public :
      int ar ;
      void area(int x , int y)
      {
          ar = x*y ;
      }
      void area(int x )
      {
          ar = x*x;
      }
      void show() 
      {
          cout<<"Area is : "<<ar <<endl ;
      }
};
int main()
{
    int  l , b , s ;
    Area rect , square ;
    cout<<"Enter Length and Breadth : " ;
    cin>>l>>b ;
    rect.area(l,b) ;
    rect.show() ;
    cout<<"Enter Side of Square: " ;
    cin>>s ;
    square.area(s) ;
    square.show() ;
    return 0;
}
