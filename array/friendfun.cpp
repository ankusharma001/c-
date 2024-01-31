#include <iostream>
 
using namespace std;
class complex ;
 class calculator 
 {
    public:
    int add (int a,int b)
    {
        return a+b; 
    }
    int sumrealco(complex,complex);
 };
 class complex 
 {
    int a,b;
    friend class calculator;
    friend int calculator ::sumrealco(complex o1,complex o2);
    public :
    void setnumber (int n1 ,int n2)
    {
        a=n1;
        b=n2;

        
    }
    void printnumber()
    {
        cout<<"your number is "<<b<< " + "<<a<<endl;
    } 
 };

int calculator :: sumrealco(complex o1,complex o2)
{
    return (o1.a+o2.a);
}
 
int main()
{
    complex o1,o2;
    o1.setnumber (1,4);
    o2.setnumber(5,7);
    calculator calc;
    int res=calc.sumrealco(o1,o2);
    cout<<"sum"<<res<<endl;
     
return 0;
}