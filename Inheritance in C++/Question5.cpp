/*5.
class B
{
int a, b;
protected:
int x, y;
public:
int c;
void get(){cin>>a>>b>>x>>y>>c;}
void print(){cout<<”base”<<endl<<a<<b<<x<<y<<c<<endl;}
};
class A:public B
{
int d;
public:
int e;
void read(){cin>>d>>e;}
void disp(){cout<<d<<e;}
}
int main()
{
A A1;
}
i.	What all things can be accessed using A1 from main?
ii.	Which are the private, public and protected members of class B and Class A?
iii.If class A is inheriting class B in protected mode, then which are the private, public and protected members of class A?
iv.	If class A is inheriting class B in private mode, then how to read values for base class members?
Show the same using code.
v.	Can object of class A, access protected members from main()?
*/

#include<iostream>
using namespace std;

class B{
int a, b;
protected:
int x, y;
public:
int c;
void get(){
    cout<<"Enter a values of a,b,x,y,c resp"<<endl;
    cin>>a>>b>>x>>y>>c;}
void print(){cout<<"base :"<<endl<<" Private :"<<a<<b<<" Protected :"<<x<<y<<" Public :"<<c<<endl;}
};

class A:public B{
int d;
public:
int e;
void read(){
    cout<<"Enter value of d, e resp"<<endl;
    cin>>d>>e;}
void disp(){cout<<"Child :"<<" Private :"<<d<<" Public :"<<e;}
};

int main(){
A A1;
//i.What all things can be accessed using A1 from main?
A1.get();
A1.print();
A1.read();
A1.disp();
}