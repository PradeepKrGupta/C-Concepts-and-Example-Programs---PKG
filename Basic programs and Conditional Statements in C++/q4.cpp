/*4. Read a number n, display the output "even" if it is even, "odd" if it is odd, "ZERO??" 
if it is zero.
Input: Read a number from the user.
Output: Display the output in a single line.
testinput1: 4
testoutput1: even
testInput2: 7 
testoutput2: odd*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<num<<" is even number";
    }
    else if(num%2==1){
        cout<<num<<" is odd number";
    }
    else{
         cout<<num<<" is Zero";
    }
    
}
