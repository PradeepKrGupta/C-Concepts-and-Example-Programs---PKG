/*create a distance class with feet and inches as data members,members fucntion to input distance, member function calculate_to_inches. and return the total inches, memeber function to add two distance objects, Display(),which displays the data memebers.Write a main fucntion to create object of Distance class. Input two distances and output the sum*/

#include <iostream>
using namespace std;

class Distance
{
    int feet, inches;

    public:
        int getDistance()
        {
            cout << "Enter the distances in feet and inches" << endl;
            cin >>feet;
            cin >>inches;
        }

        int calculate_to_inches()
        {
            int T_inch=0;
            T_inch = ((feet * 12) + inches);
            return T_inch;
        }

        void display(Distance d)
        {
            int ft,inh,sum;
            ft=feet+d.feet;
            inh=inches+d.inches;
            if(inh>12){
                inh=inh-12;
                ft=ft+1;
            }

            cout << "The total distances is :"<<ft<<"feet and"<<inh<<"inches"<<endl;
        }
};

int main()
{
    Distance d1, d2;
    d1.getDistance();
    d2.getDistance();
    cout<<"The d1 distance in inches is"<<d1.calculate_to_inches()<<endl;
    cout<<"The d2 distance in inches is"<<d2.calculate_to_inches()<<endl;
    d1.display(d2);
    
}