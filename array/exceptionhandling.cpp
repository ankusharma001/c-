#include <iostream>
 
using namespace std;
 
 class division
 {
    public:
    int num,den;
    division(int n ,int d):num(n),den(d){}
    double divide()
    {
        if(den==0) throw den;
        return num/(double) den;

    }
 };
int main()
{
   division div(5,2);
   division divo (2,0);

   try
   {
    double res =div.divide ();
    
    cout <<"division is "<<res <<endl ;
    


   }
   catch(int d )
   {
    cout<<"denominator can be 0 "<<endl ;
   }
   
   try
   {
    /* code */double rest =divo.divide ();
    cout <<"division is "<<rest <<endl ;
   }
   catch(int d)
   {
    cout<<"denomanator can be 0 "<<endl;
   }
   


return 0;
}