/*8. Create class student and having data members as regno and cgpa and member function read_stud, disp_stud and also create class Employee and having data members year of exp, salary and member function readfaculty,dispfaculy and then again create class that is inherited from class student,Faculty and having data members as Read_TA,disp_TA also create a class faculty having data member as hour per week and member function as read_TA,disp_TA*/


#include<iostream>
using namespace std;

class Student{
    protected:
    int regno;
    double cgpa;
    public:
    void read_stud(){
        cout<<"Enter your Regno:"<<endl;
        cin>>regno;
        cout<<"Enter your CGPA:"<<endl;
        cin>>cgpa;
    }
    void display_stud(){
        cout<<"Regno is :"<<regno<<endl;
        cout<<"CGPA is :"<<cgpa<<endl;
    }

};

class Employee{
    protected:
    int year_of_exp;
    int salary;
    public:
    void read_faculty(){
        cout<<"Enter your year_of_exp:"<<endl;
        cin>>year_of_exp;
        cout<<"Enter your salary:"<<endl;
        cin>>salary;
    }
    void display_faculty(){
        cout<<"Year of Experience is :"<<year_of_exp<<endl;
        cout<<"Salary is :"<<salary<<endl;
    }
};

class TA:public Student, public Employee{
    int temp;
    public:
    TA(){
        cout<<"Enter 1 if you are student/else enter any number"<<endl;
        cin>>temp;
    }     
    void read_TA(){
        if(temp==1){
            read_stud();
        }
        else{
            read_faculty();
        }
    }
    void disp_TA(){
        if(temp==1){
            display_stud();
        }
        else{
            display_faculty();
        }
    }
};

class Faculty:public Employee{
    int Hours_per_week;
    public:
    Faculty(){
        cout<<"Enter number of hours per week"<<endl;
        cin>>Hours_per_week;
    }
    void read_TA(){
        read_faculty();
    }
    void disp_TA(){
        display_faculty();
        cout<<"Number of hours per week is :"<<Hours_per_week<<endl;
    }

};

int main(){
    TA t;
    t.read_TA();
    t.disp_TA();
    Faculty f;
    f.read_TA();
    f.disp_TA();
}