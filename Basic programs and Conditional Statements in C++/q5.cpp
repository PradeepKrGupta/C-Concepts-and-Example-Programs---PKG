/*5.Read a number from the user and check whether it is positive or negative. Display the
output "positive" if it is positive, "negative" if it is negative, "zero" otherwise.
Input: Get a single value from the user 
Output: display the output in single line.
Input1: -2 Output1: negative
Input2: 5 Output2: positive
Input3: 0 Output1: zero
*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    if(num>0){
        cout<<num<<" is positive";
    }
    else if(num<0){
        cout<<num<<" is negative";
    }
    else{
         cout<<num<<" is Zero";
    }
    
}
