// Task 2 : Practical 9 : To Call a Constructor and Getter and Setter
#include <iostream>

using namespace std;

class ABC
{
    private :
       int a ;
       int b ;
    public :
      ABC()
      {
          cout<<"Constructor is Called " << endl ;
      }
      void setA(int c) // Setter
      {
          a = c ; // Setting the Private Variable a Using Setter
      }
      int getA() // Getter
      {
          return a ;
      }
      void setB(int d) // Setter
      {
          b = d ; // Setting the Private Variable b Using Setter
      }
      int getB()  // Getter
      {
          return b ;
      }
};
int main()
{
    ABC obj ; // Creating Object  Constructor will Called When an Object is Created 
    int num1 , num2  ;
    cout<<"Enter the Value of Private Variable A and B: " ;
    cin>>num1>>num2;
    obj.setA(num1) ; // Setting the Value of Private Variable of Class Using Setter 
    obj.setB(num2) ;
    cout<<"The Value of Private Variable A and B is : "<<obj.getA() <<"  " <<obj.getB() << endl ; // Getting the Value of a and b using Getter Function 
    return 0;
}
