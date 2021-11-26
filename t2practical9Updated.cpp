// Task 2 : Practical 9 : To Call a Constructor 
#include <iostream>

using namespace std;

class Area
{
    public :
      int ar ;
      Area(int x , int y)
      {
          ar = x*y ;
      }
      Area(int x )
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
    
    cout<<"Enter Length and Breadth : " ;
    cin>>l>>b ;
    Area rect(l,b) ;
    rect.show() ;
    cout<<"Enter Side of Square: " ;
    cin>>s ;
    Area square(s) ;
    square.show() ;
    return 0;
}
