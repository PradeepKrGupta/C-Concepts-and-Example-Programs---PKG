/*2. Create a class named student with reg.no, three subjects and functions read(), print_sum() and print_avg().Calculate sum and average and display the results*/

#include <iostream>
using namespace std;
 
class student{
    public:
      int regno,sub1,sub2,sub3;
    
      void read();
      void print_sum();
      void print_avg();
    
};
void student::read(){
   cout<<"Enter the regno,sub1,sub2,sub3 resp!"<<endl;
   cin>>regno;
   cin>>sub1;
   cin>>sub2;
   cin>>sub3; 
    };
void student::print_sum(){
   int sum= (sub1+sub2+sub3);
   cout<<"The regno is:"<<regno<<endl<<"The sum of the three subjects is :"<<sum<<endl;
    };
void student::print_avg(){
   int sum= (sub1+sub2+sub3);
   int avg= sum/3;
   cout<<"The Avg of the three subjects is :"<<avg;
    };
 
int main(){
  student s;
  s.read();
  s.print_sum();
  s.print_avg();
}
