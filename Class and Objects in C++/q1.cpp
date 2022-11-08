/*1. Create a class named 'Student' with integer age and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of age as 21 by creating an object of the class Student.*/

#include<iostream>
using namespace std;
 
class student{
    public:
       int age=21;
       int rollno=2;
       void display(){
          cout<<"The age of student is"<<age<<endl<<" and rollno is"<<rollno; 
  }
};
 
int main(){
   student s;
   s.display();
}
