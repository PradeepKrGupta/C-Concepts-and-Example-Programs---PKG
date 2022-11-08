/*1.Define a base class Shape with data members length and breadth and member function input(). And derive a class rectangle from the base class which has data members area and member function findarea() and display ().*/

#include<iostream>
using namespace std;

class Shape{
    protected:
    int length, breadth;
    public:
    int input(){
        cout<<"Enter a lenght and breadth resp!"<<endl;
        cin>>length>>breadth;
    }
};
class Rectangle: public Shape{
    public:
    int area;
    int findarea(){
        area = length*breadth;
        return area;
    }
    int display(){
        cout<<"The area of ractangle is :"<<findarea()<<endl;
    }
};

int main(){
    Rectangle r;
    r.input();
    r.findarea();
    r.display();
}

