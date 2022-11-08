/*Write a C++ program to count the number of objects created and destroyed and print the same with suitable messages. Use default, parameterized, copy constructor and destructor in the program*/

#include<iostream>
using namespace std;
int cons=0,dest=0;
class count_obj{
    public:
        count_obj(){
            cons++;
        }

        count_obj(int x){
            cons++;
        }

        count_obj(count_obj &c){
            cons++;
        }

        ~count_obj(){
            dest++;
        }

        void display(){
            cout<<"Total object created :"<<cons<<endl<<"Total object destroyed :"<<dest<<endl;
        }
};
int main(){
    count_obj c1,c2(2),c3(c2),c4;
    c1.~count_obj();
    c2.~count_obj();
    c3.~count_obj();
    c4.display();
    return 0;

    
}