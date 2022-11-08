/*5. Default argument – print line
Use the function definition: void printline(char ch=’*’,int len=40); 
and write the function to print the corresponding character for the provided 
count.
Include function calls
1. to print ‘=’ for 40 times
2. print ‘+’ for 20 times
3. print ‘*’ for 10 time*/

#include<iostream>
using namespace std;

void printline(char ch[], int len){
    int i;
    for(i=0;i<len;i++){
        cout<<ch;
    }
    
}

int main(){
    int len;
    char ch[2];
    cout<<"Enter the character you want to print"<<endl;
    cin>>ch;
    cout<<"Enter the number of times you want to print that character"<<endl;
    cin>>len;
    printline(ch,len);
}