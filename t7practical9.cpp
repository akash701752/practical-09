// Practical 9 OOPs 
// Task :
/*
   WAP which would perform these tasks of your data:
   a. Come to next line
   b. set minimum field width
   c. fill string with (*) after setw(15) function
    **********1234
   by using endl, setw, and setfill [Manipulators in C++] 
*/

#include <iostream>
#include <iomanip>
using namespace std ;
int main()
{
    cout<<"\t\t Akash Yadav 200111076 A " <<endl ;
    cout<<"The Curson will point to Next Line after Execution" << endl << endl ; // endl for newline
    int num ;
    cout<<"Enter a Number :" ;
    cin>>num ;
    cout<<"Number Before Setting the Width " <<endl ;
    cout<<num <<endl  ;
    cout<<"Number After Setting the Width 10 " <<endl ;
    cout<<setw(10) ; //setting width 10
    cout<<num <<endl <<endl ;
    cout<<"Number After Using Setfill " <<endl ;
    cout<<setfill('*') <<setw(20);
    cout<<num << endl << endl;
    return 0;
}
