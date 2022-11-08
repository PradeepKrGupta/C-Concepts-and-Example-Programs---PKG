/*3.Create a Sphere class that inherits from a Circle class. 
 Define a class named circle with one private data member: radius. Define a parameterized constructor and a destructor for the class and write member functions to find the perimeter and area of a circle using the following relationships.
perimeter = 2 * π * radius,  area = π * radius * radius
Define an inherited class named Sphere. Also define a parameterized constructor and a destructor for the class and write member functions to find the surface area and volume of a sphere.
Surface area = 2 * radius * perimeter,  volume = (4 / 3) * radius * area
Write an application file to test the Circle and Sphere classes.
*/


#include<iostream>
using namespace std;

class Circle{
    double radius;
    public:
    Circle(){
        radius=0;
        cout<<"Circle:Default constructor"<<endl;
    }
    Circle(int r){
        radius=r;
        cout<<"Circle: perametrized constructor"<<endl;
    }
    double getdata(){
        return radius;
    }
    double CArea(){
        double carea = 3.14 * radius * radius;
        return carea;
    }
    double Cperimeter(){
        double cperimeter = 2 * 3.14 * radius;
        return cperimeter;
    }
    ~Circle(){
        cout<<"Circle: object is distroyed"<<endl;
    }

};
class Sphere:public Circle{
    public:
    Sphere(){
        cout<<"Sphere: Default constructor"<<endl;
    }
    Sphere(double r):Circle(r){
        cout<<"Sphere: perametrized constructor"<<endl;
    }

    double SArea(){
        double sarea = 2 * getdata() * Cperimeter();
        return sarea;
    }
    double Volume(){
        double volume = (4 / 3) * getdata() * CArea();
        return volume;
    }
    ~Sphere(){
        cout<<"Sphere: object is distroyed"<<endl;
    }

};

int main(){
    Circle c(5);
    cout<<"Area of Circle :"<<c.CArea()<<endl;
    cout<<"Perimeter of Circle :"<<c.Cperimeter()<<endl;
    Sphere s(6);
    cout<<"Area of Sphere is :"<<s.SArea()<<endl;
    cout<<"Volume of Sphere is :"<<s.Volume()<<endl;
}