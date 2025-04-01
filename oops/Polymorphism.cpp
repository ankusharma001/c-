#include <bits/stdc++.h>
//#include <iostream>

//constructor overloading is the example of polymorphism
// type of polymorphism/
//                 compile time  -> function and constructor and opeator overloading
//                 run time ->> overriding  -> function , constructor , virtual functions
 
using namespace std;
 
class Student {

  public:
  int age ;
  string name ;
   Student(){
    cout <<" non parametrized constructor"<<endl ;
   }
   Student(string name){

    this-> name = name;
    cout <<"  parametrized constructor"<< endl;
   }
  void  showinfo()
   {
    cout<<"parent class"<<endl;
   }

   void showinfo (int age)
   {
    cout <<"age :"<< age<<endl;
   }
   void showinfo (string name)
   {
    cout <<"name :"<< name<<endl;
   }


   
};

class child : public Student{
  public:
 void  showinfo()
  {
    cout << " child class "<<endl;
  }
};
 
int main()
{

  Student st1 ("tony") ;
  st1.showinfo(12);
  st1.showinfo();

  child ch1;
  ch1.showinfo();
  
  // cout << st1;
  
 
  return 0;
}