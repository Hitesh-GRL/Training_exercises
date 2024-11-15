#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

bool isNumber(const string& str) { return !str.empty() && all_of(str.begin(), str.end(), isdigit); }

class BankAccount
{
    double balance;

    public:
        BankAccount(double init)
        {
            balance = init;
        }
        void deposit(double amount)
        {
            balance += amount;
        }
        void withdraw(double amount)
        {
            balance -= amount;
        }
        double getBalance()
        {
            return balance;
        }
};

int main()
{   BankAccount Hitesh(1020.87);
    string s_session,s_amount  ;
    double amount;
    cout <<"What do you wish to do\n1. Withdraw amount\n2. Deposit amount\n3. Check Balance\n";
    cin >> s_session;

    if(isNumber(s_session))
    {
        int session = stoi(s_session);
        switch (session)
        {  
            case 1 : 
            
            cout << "Enter Amount to be Withdrawn : ";
            cin >> s_amount;
            if(!isNumber(s_amount)){
                cout << "Invalid amount\n";
            }
            else 
            {   amount = stoi(s_amount);
                try {
                    if(amount < 0)
                    { throw amount; }
                    else if(amount > Hitesh.getBalance())
                    {throw (int)amount; }
                }
                catch(double amt)
                {
                    cout << "Cannot withdraw negative amount : " << amount << "\n";
                    break;
                }
                catch(int amt)
                {
                    cout << "You are Insufficient of funds\nYour balance is : " << Hitesh.getBalance();
                    break;
                }
                Hitesh.withdraw(amount);
                cout << "Your remaining balance is : " << Hitesh.getBalance();
                break;
            } 
            break;
            case 2:

            cout << "Enter Amount to be Deposited : ";
            cin >> s_amount;

            if(!isNumber(s_amount)){
                cout << "Invalid amount\n";
            }
            else 
            {   amount = stoi(s_amount);
                try {
                    if(amount < 0) {throw amount;}
                }
                catch(double amt){
                    cout << "Cannot deposit Negative amount : " << amount;
                    break;
                }
                Hitesh.deposit(amount);
                cout << "Your remaining balance is : " << Hitesh.getBalance();
                break;
            }
            break;
            case 3:

                cout << "Your Balance is : " << Hitesh.getBalance();
                break;

            default :
                cout << "Invalid Operation";
        }
    }
    else
    {
        cout << "Invalid Session";
    }
    return 0;
}