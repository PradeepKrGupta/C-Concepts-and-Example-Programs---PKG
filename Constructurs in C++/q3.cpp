/*Create a class point with members X and Y. Use parameterized constructor to initialize the class members. Use copy constructor to coy the value of point P1 to Point P2. Include function calculate_distance which finds the distance between two points P1 and P3.*/

#include<iostream>
#include<cmath>
using namespace std;

class point{
    float x,y;
    public:
        point(float a, float b){
            x=a;
            y=b;
            
        }
        point(point &p){
            x=p.x;
            y=p.y;
        }
        void calculate_distance(point k1, point k2){
            x=k1.x-k2.x;
            y=k1.y-k2.y;
            float dis = sqrt(x*x + y*y);
            cout<<"Distance between two points is :"<<dis<<endl;
        }

};

int main(){
    point p1(2,4);
    point p2(4,5);
    point p3(5,6);
    point p4(p2);
    point p5(0,0);
    p5.calculate_distance(p4,p3);
}
