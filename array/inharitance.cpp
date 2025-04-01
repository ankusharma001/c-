#include <iostream>
#include <string>
using namespace std;
 class student 
 {
   int  roll_no;
   string name;
   int cgpa ;
   

//    student (int roll,string name)
//    {
//     this->roll_no=roll_no;
//     this -> name=name ;

//    }

public:

   student (int ro,string na):
   roll_no(ro),name(na)
   {
    cgpa=9;
   }

   int cgpa()
   {
    return cgpa;
   }

 };
 class year : public student 
 {
    int years;
    public:
    
    // year (int ro,string na,int years ) :student ( ro , na ,years)
    // {
    //   this ->years=years;
        
    // }

 };
int main()
{
    
return 0;
 
}