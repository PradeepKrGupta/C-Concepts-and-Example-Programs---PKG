/*3. Read 2 numbers a and b and find the sum 
Input: Read 2 numbers from user
Output: Display the sum
Test input:
4
5
Test output:
Sum of 4 and 5 is 9
Conditional Statements
*/

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the value of num1 and num2";
    cin>>num1;
    cin>>num2;
    int sum= num1+num2;
    cout<<"Sum of two numbers "<<num1<<"and "<<num2<<"is "<<sum;
}
