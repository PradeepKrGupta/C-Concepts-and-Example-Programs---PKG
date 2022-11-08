/*4. Create a class called 'EMPLOYEE' that has EMPCODE, EMPNAME and Annunal_salary as data members. Include member function getdata( ) to input data , member function display( ) to output data. Write a main function to create EMP, an array of EMPLOYEE objects. Accept and display the details of N employees.*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;
 
class employee{
    int EMPCODE;
    string EMPNAME;
    int Annual_salary;
    public:
       void getdata();
       void display();
    
};
 
void employee::getdata(){
    cout<<"Enter the EmpCode"<<endl;
    cin>>EMPCODE;
    cout<<"Enter the EMPNAME"<<endl;
    cin>>EMPNAME;
    cout<<"Enter the Annual_salary"<<endl;
    cin>>Annual_salary;
    cout<<endl;
};
 
void employee::display(){
    cout<<"Empcode :"<<EMPCODE<<endl;
    cout<<"EMPNAME :"<<EMPNAME<<endl;
    cout<<"Annual_salary :"<<Annual_salary<<endl;
    cout<<endl;
};
 
int main(){
   int i,size;
   cout<<"Enter the size of the employee details"<<endl;
   cin>>size;
   employee arr[size];
   cout<<"Enter the details of the employee\n";
   for(i=0;i<size;i++){
      arr[i].getdata();
   }
   cout<<"Details of the Employee";
   for(i=0;i<size;i++){
      arr[i].display();
   }
};
