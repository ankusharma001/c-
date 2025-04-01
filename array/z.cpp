#include <iostream>
 
using namespace std;
 
 class accountnumber 
 {
    string accountnumbe ;
    double balance;
    public:
    accountnumber (string accNum ,double initialbalance): accountnumber (accnum),
    balance (initialbalance )
    {}
    void deposit (double amount )
    {
        if(balance >=amount )
        {
            balance -=amount ;
        }
        else {
            
        }

        cout<<"can't withdraw "<<endl ;
    }
    void displayBalance ()
    {
        cout << balance <<endl ;
    }
    class savingaccount : public account ()
    {

    }
 };
int main()
{
    
return 0;
}