
#include <iostream>
#include<math.h>
using namespace std;

class complex
{
    double real;
    double img;

public:
    complex(double r, double i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
    complex operator+(const complex &other)
    {
        complex ans(0, 0);
        ans.real = real + other.real;
        ans.img = img + other.img;
        return ans;
    } 
    complex operator-(const complex &other)
    {
        complex ans(0, 0);
        ans.real = real - other.real;
        ans.img = img - other.img;
        return ans;
    }
    complex operator*(const complex& other)
    {
        complex ans(0,0);
        ans.real=real*other.real-img*other.img;
        ans.img=real*other.img+img*other.real;
        return ans;
    }
    complex operator/(const complex& other)
    {
        complex ans(0,0);
        ans.real=(real*other.real+img*other.img)/(pow(other.real,2)+pow(other.img,2));
        ans.img=(-real*other.img+img*other.real)/(pow(other.real,2)+pow(other.img,2));
        return ans;
    }
};

class employee {
    int salary ;
    string name ;
    string skill;

    employee operator +(employee& other )
    {

    }

    bool operator <(employee & other )
    {

    }
};

int main()
{
    employee c1;
    int a;
    +a;
    
    // complex c1(1, 3), c2(4, 2);
    // complex c3 = c1 + c2;
    // c3.display();
    // complex c4 = c1 - c2;
    // c4.display();
    // complex c5 = c1 * c2;
    // c5.display();
    // complex c6 = c1 / c2;
    // c6.display();

    return 0;
}
// #include <iostream>
// using namespace std;

// class complex 
// {
//     double real;
//     double img;

//     public:

//     complex(double r, double i)
//     {
//         real =r;
//         img=i;

//     }

//     void display()
//     {
//         cout<<real<<"+"<<img<<"i\n";
//     }

//     complex operator +(complex & other )
//     {
//         complex ans(0,0);
//         ans.real=real+other.real;
//         ans.img=img+other.img;

//     }

//     complex operator -(complex & other )
//     {
//         complex ans(0,0);
//         ans.real=real-other.real;
//         ans.img=img-other.img;

//     }

// };

// int main()
// {
//     complex c1(1,3),c2(4,2);
//     complex c3=c1+c2;
//     c3.display();
//     complex c4=c1-c2;
//     c4.display();
   
// return 0;
// }