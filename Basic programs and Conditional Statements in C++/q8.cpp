// 8. Write a program to add all elements of an array

#include<iostream>
using namespace std;

void ElementSum(int size){
    int i,sum=0;
    
    int arr[size];
    cout<<"Enter the elements of the array!"<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"The sum of all elements of the array is :"<<sum;
}

int main(){
    int size;
    cout<<"Enter the size of the array!"<<endl;
    cin>>size;
    ElementSum(size);
}