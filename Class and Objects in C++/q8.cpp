/*8.Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. First function named  as  'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the  area of the rectangle. Length and breadth of the rectangle are entered through keyboard.*/
 #include<iostream>
 using namespace std;
 class Area{
 public:
 float length;
 float breadth;
 
 void setDim()
 {
 cout<<"Enter the length of the rectangle ";
 cin>>length;
 cout<<"Enter the breadth of the rectangle ";
 cin>>breadth;
 }
 
 float getArea()
 {
 return length*breadth;
 }
 
 };
 
 int main()
 {
 Area a1;
 a1.setDim();
 cout<<"The area of the rectangle is "<<a1.getArea();
 return 0;
 }
