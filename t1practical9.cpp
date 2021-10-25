// Task 1 : Practical 9 : To Call a Constructor 
#include <iostream>

using namespace std;

class ABC
{
    private :
       int a ;
    public :
      ABC()
      {
          cout<<"Constructor is Called " << endl ;
      }
      void setA(int b) // Setter
      {
          a = b ; // Setting the Private Variable a Using Setter
      }
      int getA()
      {
          return a ;
      }
};
int main()
{
    ABC obj ; // Creating Object  Constructor will Called When an Object is Created 
    int num ;
    cout<<"Enter the Value of Private Variable : " ;
    cin>>num ;
    obj.setA(num) ; // Setting the Value of Private Variable of Class Using Setter 
    cout<<"The Value of Private Variable is : "<<obj.getA() << endl ; // Getting the Value of a using Getter Function 
    return 0;
}

