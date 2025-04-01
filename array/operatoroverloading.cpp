#include <iostream>

using namespace std;

class marks
{
  int a;
  int b;

public:
  marks(int c, int d) : a(c), b(d) {}
  void display();
  // marks operator -();
  marks operator-()
  {
    a = -a;
    b = -b;
  }
};

void marks ::display()
{
  cout << a << " " << b;
}

int main()
{
  int a = 1;
  int b = 2;
  marks co(a, b);
  -co;
  co.display();

  return 0;
}