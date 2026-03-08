#include<iostream>
using namespace std;

struct BankAccount
{
    int accNo;
    float balance;
    float rate;
};

int main()
{
    BankAccount acc;

    cout<<"Enter Account Number: ";
    cin>>acc.accNo;

    cout<<"Enter Balance: ";
    cin>>acc.balance;

    cout<<"Enter Interest Rate: ";
    cin>>acc.rate;

    float interest = acc.balance * acc.rate / 100;

    cout<<"\nAccount Number: "<<acc.accNo;
    cout<<"\nBalance: "<<acc.balance;
    cout<<"\nInterest: "<<interest<<endl;

    return 0;
}
