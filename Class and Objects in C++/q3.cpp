/*3. Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.*/

#include<iostream>
#include<cmath>
using namespace std;
 
class triangle{
     int s1=3,s2=4,s3=5;
     public:
        void area();
        void perimeter();
};
 
void triangle::area(){
      int s= (s1+s2+s3)/2;
      int A= sqrt(s*(s-s1)*(s-s2)*(s-s3));
      cout<<"The area of triangle is :"<<A<<endl;
};
 
void triangle::perimeter(){
      int p= (s1+s2+s3);
      
      cout<<"The perimeter of triangle is :"<<p<<endl;
};
 
int main(){
   triangle t;
   t.area();
   t.perimeter();
};
