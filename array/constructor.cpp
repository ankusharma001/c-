#include <iostream>
 
using namespace std;

class complex 
{
    int a,b;

    public:
    complex(int ,int );

    void printnumber ()
    {
        cout<<"your number is "<<a<<" + "<<b<<endl;
    }

};

complex ::complex(int x,int y )
{
    a=x;
    b=y;
}
 
 class point
 {
    int x,y;
    public :
    point (int a,int b)
    {
        x=a;
        y=b;

    }
    void displaypoint ()
    {
        cout <<"the point is "<<x<<" , "<<y<<endl ;


    }
 };
int main()
{
    complex a(4,36);
    a.printnumber();
    
    point q(4,6);
    q.displaypoint(); 

    
return 0;
}