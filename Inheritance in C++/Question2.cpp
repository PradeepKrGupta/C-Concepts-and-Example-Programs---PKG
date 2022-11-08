/*2.Design a class name Square that defines a square geometric shape. The class must have a data member named side that defines the length of each side. Then define two member functions, Find_Peri and Find_Area, to find the perimeter and area of the square shape. Now define a Cube that defines a cubic shape and inherits from the Square class. The class Cube needs no new data members, but it needs the member functions Find_surfaceArea_cube and Find_peri_cube. With the help of base class fns find the area and perimeter of cube. Provide the appropriate constructors and destructors for both classes.*/

#include<iostream>
using namespace std;

class Square{
    protected:
    int length=5;
    public:
    int find_peri(){
        int perimeter = 4*length;
        return perimeter;
    }
    int Find_Area(){
        int area = length*length;
        return area;
    }
};
class Cube: public Square{
    public:
    int Find_surfaceArea_cube(){
        int SArea = 6 * length*length;
        return SArea;
    }
    int Find_peri_cube(){
        int cperi = 12 * length;
        return cperi;
    }
};

int main(){
    Cube c;
    cout<<"Perimeter of Square is :"<<c.find_peri()<<endl;
    cout<<"Area of Square is :"<<c.Find_Area()<<endl;
    cout<<"Area Cube is :"<<c.Find_surfaceArea_cube()<<endl;
    cout<<"Perimeter Cube is :"<<c.Find_peri_cube()<<endl;
}

