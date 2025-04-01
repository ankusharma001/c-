#include <bits/stdc++.h>
//#include <iostream>
 
// deep and shallow pointers
//overloading
//friend function and friend class

using namespace std;
class teacher{

  private:
   double salary;

  public:

  //property 
  string name ;
  string dept ;
  string subject ;

//non - parameteriszed 
  teacher()
  {
    cout << " hi i am techer const ructor"<<endl;
    dept = " computer science";
  }

  teacher(string name ,string subject ,  double s)

  {
    // for overlook of showding 
    this->name = name ;
    this ->subject = subject;

    // this is not add in the showding because of the parameter name
    salary = s;
    
  }

  //Custom copy constructor 
  // two typw of copt ->
                  //  deep & shallow copy 

  teacher (teacher &org)
  {
    cout << " this is custom copy constructor"<< endl;
    this -> name = org.name;
    this -> salary = org.salary;
    this -> dept = org.dept;
    this -> subject = org.subject;
  }


 
  void change_department(string new_dept)
  {
    dept == new_dept;
  }

  // setter
  void setsalary(double s )
  {
     salary = s;
  }

  // getter
  double getSalary ()
  {
    return salary;
  }

  friend ostream& operator<<(ostream& os, const teacher& t) {
    os << "Name: " << t.name << "\n"
       << "Department: " << t.dept << "\n"
       << "Subject: " << t.subject << "\n"
       << "Salary: " << t.salary;
    return os;
}
};
class Student {
  public :

  string name;
  int age;
  double cgpa;
  string fathername;
  Student (string name , double cgpa){
    this -> name = name ;
    this -> cgpa = cgpa;
  }
  

};


int main()
{
  teacher teache1 ;
  
  teache1.name = "tina";
  teache1.dept = "Science";
  teache1.setsalary(8000) ;
  teache1.subject = "Biology";

  teacher teache2(teache1) ;
  teacher teache3("alia" , "Yoga",45000 );


  cout << teache1<<endl<<endl;
  cout << teache2<<endl<<endl;
  cout << teache3<<endl<<endl;

  
 
  return 0;
}

/*class A (parent , Base)
        |
        |
        |
        |
        v
  class B (Child , Derived)

encapulation->
           data + member = encapsulation
           data hiding 

abstration->

Polymorphism->
          
*/