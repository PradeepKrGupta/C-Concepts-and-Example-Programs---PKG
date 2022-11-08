/*4. Write a calculator pgm (without classes)which has function calc(), Pass first and
second argument as operands and third argument.
Call the calc function 3 times with different values
Calc( 2, 3,’+’)
Calc(4,5,’*’)
Calc(20,30,’-‘)
*/

#include <iostream>
using namespace std;

void Calc(float first, float second, string third)
{
    float sum, mul, sub, div;
    if (third == "+")
    {
        sum = first + second;
        cout << "Sum :" << sum << endl;
    }
    else if (third == "*")
    {
        mul = first * second;
        cout << "Multiply :" << mul << endl;
    }
    else if (third == "-")
    {
        sub = first - second;
        cout << "Subtract :" << sub << endl;
    }
    else if (third == "/")
    {
        div = first / second;
        cout << "Division :" << div << endl;
    }
}
int main()
{
    Calc(2, 3,"+");
    Calc(4, 5,"*");
    Calc(20, 30,"-");
    return 0;
}