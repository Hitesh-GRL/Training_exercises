#include<iostream>
#include<string>
using namespace std;

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
    int session  ;
    double amount;
    cout <<"What do you wish to do\n1. Withdraw amount\n2. Deposit amount\n3. Check Balance\n";
    cin >> session;

    switch (session)
    {
        case 1 : 
        
        cout << "Enter Amount to be Withdrawn : ";
        cin >> amount;
        if(cin.fail()){
            cout << "Invalid amount\n";
        }
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

        case 2:

        cout << "Enter Amount to be Deposited : ";
        cin >> amount;
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

        case 3:

            cout << "Your Balance is : " << Hitesh.getBalance();
            break;

        default :
            cout << "Invalid Operation";
    }

    return 0;
}