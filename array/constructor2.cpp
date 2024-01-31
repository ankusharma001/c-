#include <iostream>
 
using namespace std;
 
 class student 
 {
    string name;
    int rollno;
    int age ;
    int clas;


    public :
    student(){};


    student (string  a ,int b):name(a),rollno(b)
    {

        
        


        cout<< "Enter the age ";
        cin>>age;
        cout<<"enter the class ";
        cin>>clas;

    }
    void display();
    

 };
 void student :: display (){
        cout<<"your name is "<<name<<endl <<"your roll no is  "<<rollno<<endl<<"your age is  "<<age <<endl <<"your class is"<<clas<<endl;
    }
    
int main()
{
student s("ankuhs" ,122);
    /// s.display() ;
    

    
return 0;
}