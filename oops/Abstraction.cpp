#include <bits/stdc++.h>
//#include <iostream>
 
using namespace std;

// acces modifier is a type of abstraction
// inteface for drived class is abstraction

// static ->
//         variable decalred as stasice function is once for lifetime of that program
//         it created the memory od that variable even after the function is not in progrma stack
///         import if yiu are creatingthe static var it will impliment o the allt he ajecg the sam var usually it not happen it crate the var different for differnt var but it the magic of static keyword

 class Shape  // absract class we can not crate objects of abstract class 
 {

 public:

  virtual void draw() = 0 ; // pure virtual function

 };
 
 class Circle : public Shape{
  public:
  void draw()
  {
    cout << " drawing a circle\n";
  }

 };

 void func ()
 {
  static int x = 0;
  cout << "x: "<<x <<"\n";
  x++;
 }
 
int main()
{

  Circle c1 ;
  c1.draw();

  func ();
  func ();
  func ();

 
 
  return 0;
}