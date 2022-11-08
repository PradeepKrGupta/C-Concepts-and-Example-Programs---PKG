//find the maximum element of an array
#include<iostream>
using namespace std;

void max(int size){
    int i,maxElement=0;
    
    int arr[size];
    cout<<"Enter the elements of the array!"<<endl;
    for(i=0;i<size;i++){
        cin>>arr[i];
        if(maxElement<arr[i]){
            maxElement=arr[i];
        }
    }
    cout<<"The Maximum element of an array is :"<<maxElement;
}

int main(){
    int size;
    cout<<"Enter the size of the array!"<<endl;
    cin>>size;
    max(size);
}