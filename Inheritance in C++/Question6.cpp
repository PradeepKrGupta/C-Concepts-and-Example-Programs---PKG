/* 6.Create a class vehicle having data memebers type and memeber function read_vechicle and disp_vehicle and then again create a class car that is inherited from vechicle and having data member manufacturer name and member function read_car and disp_car and then again create class Maruti that is inherited from class car and having datat member brand name and member fucntion read maruti and disp maruti. (using concept of Hierarchical inheritance)*/

#include<iostream>
using namespace std;

class Vehicle{
    protected:
    string type;
    public:
    void read_Vehicle(){
        cout<<"Enter a type of vechicle"<<endl;
        cin>>type;
    }
    void disp_vehicle(){
        cout<<"Vehicle type is :"<<type<<endl;
    }
};

class Car:public Vehicle{
    protected:
    string manufacturer_name;
    public:
    void read_car(){
        read_Vehicle();
        cout<<"Enter a name of Manufacturer"<<endl;
        cin>>manufacturer_name;
    }
    void disp_car(){
        disp_vehicle();
        cout<<"Manufacturer name is :"<<manufacturer_name<<endl;
    }
};

class Maruti:public Car{
    protected:
    string Brand_name;
    public:
    void read_maruti(){
        read_car();
        cout<<"Enter a name of brand"<<endl;
        cin>>Brand_name;
    }
    void disp_maruti(){
        disp_car();
        cout<<"brand name is :"<<Brand_name<<endl;
    }
};

int main(){
    Maruti m;
    m.read_maruti();
    m.disp_maruti();
}