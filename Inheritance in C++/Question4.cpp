/*Create a base class called person and create data members as name and age then create memeber function as read and display,  Then create child class name student that is inherited from base class and create datamembers as regno,cgpa and member functions as read_stud, disp_stud, similarly create another clild class name faculty that is also inherited from base class and having datamembers of year of exp and salary and member function of read_faculty and disp_faculty */


#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
    void read(){
        cout<<"Enter your name!"<<endl;
        cin>>name;
        cout<<"Enter your age!"<<endl;
        cin>>age;
    }
    void display(){
        cout<<"Name is :"<<name<<endl;
        cout<<"Age is :"<<age<<endl;
    }

};

class Student:public Person{
    protected:
    int regno;
    double cgpa;
    public:
    void read_stud(){
        read();
        cout<<"Enter your Regno:"<<endl;
        cin>>regno;
        cout<<"Enter your CGPA:"<<endl;
        cin>>cgpa;
    }
    void display_stud(){
        display();
        cout<<"Regno is :"<<regno<<endl;
        cout<<"CGPA is :"<<cgpa<<endl;
    }

};

class Faculty:public Person{
    protected:
    int year_of_exp;
    int salary;
    public:
    void read_faculty(){
        read();
        cout<<"Enter your year_of_exp:"<<endl;
        cin>>year_of_exp;
        cout<<"Enter your salary:"<<endl;
        cin>>salary;
    }
    void display_faculty(){
        display();
        cout<<"Year of Experience is :"<<year_of_exp<<endl;
        cout<<"Salary is :"<<salary<<endl;
    }
};

int main(){
    Student s;
    s.read_stud();
    s.display_stud();
    Faculty f;
    f.read_faculty();
    f.display_faculty();
}