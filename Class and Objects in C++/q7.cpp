/*7.Define a class employee having members Emp-id, Emp-name, basic salary and functions accept() and display(). Calculate DA=10% of
basic salary, HRA=1200, I-tax=10% of basic salary. Display the payslip using appropriate output format.
*/

/*
#include<iostream>
#include<string>
using namespace std;
class employee{
public:
int Emp_id;
string Emp_name;
float basicsalary;

float hra,da,i_tax,net_salary;

void accept()
{
cout<<"Enter the Employee id ";
cin>>Emp_id;
cout<<"Enter the name of the employee";
cin>>Emp_name;
cout<<"Enter the Employee basic salary";
cin>>basicsalary;

hra=1200;
da=(0.1*basicsalary);
i_tax=(0.1*basicsalary);
net_salary=basicsalary+hra+da-i_tax;
}


void display()
{
cout<<"Employee id is "<<Emp_id<<endl;
cout<<"Employee name is "<<Emp_name<<endl;
cout<<"Employee basic salary is "<<basicsalary<<endl;
cout<<"DA="<<da<<endl;
cout<<"HRA="<<hra<<endl;
cout<<"I-tax="<<i_tax<<endl;
cout<<"Emplyee net salary="<<net_salary<<endl;
}

};


int main()
{
class employee e1;
e1.accept();
e1.display();
}
*/



#include<iostream>
using namespace std;

class Employee{
    int Emp_id;
    string Emp_name;
    int Salary;
    public:
          float HRA,DA,I_tax,Net_salary=0;
          void accept(){
            cout<<"Enter the employee id"<<endl;
            cin>>Emp_id;
            cout<<"Enter the employee name"<<endl;
            cin>>Emp_name;
            cout<<"Enter the employee salary"<<endl;
            cin>>Salary;

            HRA = 1200;
            DA = (0.1*Salary);
            I_tax = (0.1*Salary);
            Net_salary = (Salary+HRA+DA-I_tax);

          }

          void display(){
            cout<<"Employee id :"<<Emp_id<<endl;
            cout<<"Employee name :"<<Emp_name<<endl;
            cout<<"Employee Salary :"<<Salary<<endl;
            cout<<"DA :"<<DA<<endl;
            cout<<"I_tax :"<<I_tax<<endl;
            cout<<"Net Salary :"<<Net_salary<<endl;
          }

};

int main(){
    Employee e;
    e.accept();
    e.display();
}