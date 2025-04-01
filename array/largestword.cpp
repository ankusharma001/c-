#include <iostream>
 #include <string >
using namespace std;
 
void  largestword(string n)
{
    int l =0;
    int s=0;
    int g=0;

    for(int i=0;i<n.size();i++)
    {
        if(n[i]== ' ')
        {
            l=i;
            if(g>s)
            {
                
                if(l-s>s)
            { 
                
                g=s;
                s=l;
                
            }
            }
            else{
            g=l;
            
            if(l-s>s)
            { 
                s=l;      
            }
            }
            
            
            
        }
        

    }
    for(int i= g+1;i<s;i++)
    {
        cout<<n[i];
    }

}

int main()
{
    string newe;
    getline(cin,newe );
    string a ="  is this the world ";
    // getline (cin, a) ;
    // cout<<a;
    
    

    largestword(a);
    
return 0;
}

