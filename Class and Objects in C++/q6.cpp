/*6. Create a program to represent a bank account with data members acc.no ,name,balance and Member functions for deposit(),withdraw() and balance()
 */

#include <iostream>
#include<cmath>
using namespace std;

class BankAccount
{
    public:
        long accno;
        double balance;
        void deposit(double b)
        {
            balance = balance + b;
            cout << "Total balance after deposit is :" << balance;
        }

        void withdraw(double b)
        {
            balance = balance - b;
            cout << "Total balance after withdraw is :" << balance;
        }
        void Balance()
        {
            cout << "Total balance after transcation is :" << balance;
        }
};

int main()
{
    BankAccount b1;
    b1.accno = 1234;
    b1.balance = 500;
    long ac;
    double bal;
    int option;
    cout << "Enter the account number" << endl;
    cin >> ac;

    if (ac == b1.accno)
    {
        cout << "Welcome to your Account Sir";
        cout << "Choose the option to perform functions 1. To Deposit the amount 2. To withdraw the amount 3. To check the balance" << endl;
        cin >> option;

        if(option==1){
            cout<<"Enter th Amount to deposit"<<endl;
            cin>>bal;
            b1.deposit(bal);
        }
        else if(option==2){
            cout<<"Enter th Amount to withdraw"<<endl;
            cin>>bal;
            b1.withdraw(bal);
        }
        else if(option==3){
            b1.balance;
        }
        else{
            cout<<"Please enter the valid function no!"<<endl;
        }
    }
    else{
        cout<<"Your Account doesnot exit!";
    }
    return 0;

}