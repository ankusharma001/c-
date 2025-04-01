#include <iostream>
 
using namespace std;
 
 class test {
    int coutt=0;
    public:
    test(){
        coutt++;
        cout<<"it is called for "<<coutt<<endl;
    }
    ~test()
    {
        coutt--;
        cout<<coutt<<"is distroyed  "<<endl;
    }
 };

int main()
{
    test t1,t2,t3;
    
return 0;
}