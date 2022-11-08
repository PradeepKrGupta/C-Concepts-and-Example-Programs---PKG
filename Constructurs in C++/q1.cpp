/*1.Consider a class rectangle with members length and breadth. Find the area of rectangle using the function find_area. Use default constructor to initialize members with value zero. Use parameterized constructor to initialize members with value 5 and 7 as length and breadth respectively. Use copy constructor and copy the value of an object to another object. Find area of all the rectangle objects.*/

#include<iostream>
using namespace std;

class rectangle{
    float l,b;
    public:
        float find_area();
        rectangle(){
            l=0;
            b=0;
            cout<<"default constructor, Area :"<<l*b<<endl;
        }
        rectangle(float x, float y){
            l=x;
            b=y;
            cout<<"Parametrized constructor, Area :"<<l*b<<endl;
        }
        rectangle(rectangle &r){
            l=r.l;
            b=r.b;
            cout<<"Copy constructor, Area:"<<l*b<<endl;
        }

};

int main(){
    rectangle r1;
    rectangle r2(5,7);
    rectangle r3(r2);
    
}
