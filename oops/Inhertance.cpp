#include <bits/stdc++.h>
//#include <iostream>
 
using namespace std;
 
class Person {

  public :
  string name ; 
  int age ;

  Person (string name , int age)

  {
    this -> name = name ;
    this -> age = age;
  }

  Person()
  {
    cout <<"parent constructor call in first than the child class"<< endl ;// its oposite in destructor 
  }

  

};

class Teacher: virtual public Person{
  public:
  string subject ;
  double salary ;


};

class Student :virtual public Person{
  // name and age is already persent the studnet as it is inherited from Person parent class

  public:
  long long  rollno ;

  Student() : Person () // if customm constructor is made
  {
    cout << "child constructor call in second than the parent class"<<endl; // its oposite in destructor 
  }

  Student(string name , int age ,  long long rollno) : Person ( name , age) // if customm constructor is made
  {
    cout << "child constructor call in second than the parent class"<<endl; // its oposite in destructor 

    this -> rollno = rollno ;
  }


   void getinfo (){
    cout << "name :" << name <<endl << "age :" <<age<< endl << "roll no :"<<rollno<<endl;
   }
} ;

class Grad : public Student{
  public:
  string researchArea;

  Grad():Student(){}

  Grad(string name , int age ,  long long rollno,string researchArea) : Student( name ,  age ,   rollno){
    this -> researchArea = researchArea;

  }

  void getinfo (){
    cout << "name :" << name <<endl << "age :" <<age<< endl << "roll no :"<<rollno<<endl<< "research Area :" << researchArea;
   }



};

class TA : public Student , public Teacher{
  public:
  void getinfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll No: " << rollno << endl;
    cout << "Subject: " << subject << endl;
    cout << "Salary: " << salary << endl;
  }

};
 
int main()
{

  Student st1;
  st1.name = " ankush";
  st1.age = 20;
  st1.rollno = 2210991283 ;

  st1.getinfo();
  
  Grad g1("nk",25,222,"Mythilogy") ;

  // g1.name = "nk";
  // g1.age = 25;

  // g1.rollno = 102;

  g1.getinfo();

  TA t1;

  t1.name ="akush";
  t1.age = 24;
  t1.rollno= 201;
  t1.salary = 10000;
  t1.subject = "Ads";

  t1.getinfo();


  


 
 
  return 0;
}

/*class A (parent , Base)
        |
        |
        |
        |
        v
  class B (Child , Derived)

  types of inheritance ->
                  single (Parent to child )
                  multiple- level 
                  multiple inheritance
                  hierarchial
                  Hybrid 

  polymorphism ->act as  differnt from (constructor over loading )
*/