/*6.Find the factorial of a number using while loop ,do while loop
Input: Get a number from the user
Output: display the factorial of the number
Input1: 3 Output1: 6
Input2: 5 Output2: 120*/

// #include<iostream>
// using namespace std;

// int fact(int num){
//     int i,factorial;
//     for(i=1;i<=num;i++){
//         factorial=factorial*i;
//     }
//     cout<<"Factorial of"<<factorial<<" is : "<<factorial;
// }

// int main(){
//     int num;
//     cout<<"Enter a number";
//     cin>>num;
//     fact(num);
// }

/*11.Rewrite the factorial program using class and objects by including input function, calc
function and display function to display the results.*/

#include <iostream>
using namespace std;

class facto
{
private:
    int num, i, factorial=1;

public: // Access specifier
    void fact();
    void display(); // defining fuction inside a class
};

void facto::fact()
{
    cout << "Enter a number" << endl;
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    
}

void facto::display()
{
    cout << "Factorial of" << num << " is : " << factorial;
}

int main()
{
    facto f;  // creating an object of class facto as f
    f.fact(); // calling function from the class object to display the output
    f.display();
}