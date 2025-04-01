#include <iostream>
using namespace std;

class length 
{
    int metre ;
    int centi;

    public :
    length (){metre=0,centi=0;};
    length(int m ,int cm )
    {
        metre =m;
        centi =cm;

    }
    void display (){
        cout<<metre <<"m"<<centi <<"cm";
    }
    length operator++(int )
    {
        ++centi ;
        if (centi>=100 )
        {
            ++metre;
            centi %=100;
        }
        return length (metre ,centi);
    }
    

};
int main()
{
    length l(1,99);
    l++;
    l.display ();
   
return 0;
}