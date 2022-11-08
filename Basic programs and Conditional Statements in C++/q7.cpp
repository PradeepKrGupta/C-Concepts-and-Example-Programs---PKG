/* 8. Find whether a given number is a palindrome or not using for loop
Input: Get a number from the user 
Input1: 34543 Output1: The given number 34543 is a palindrome
Input2: 54341 Output2: The given number 54341 is not a palindrome*/

#include<iostream>
using namespace std;

void palindrome(int num){
    int rem,rev,original;
    original=num;
    while(num!=0){
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    if(rev==original){
        cout<<"The given number "<<original<<" is palindrome!";
    }
    else{
        cout<<"The given number "<<original<<" is not palindrome!";
    }
}
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    palindrome(num);
}
