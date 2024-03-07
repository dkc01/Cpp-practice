#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;
    double interestRate;

public: 
    BankAccount() 
    {
        balance = 0;
        interestRate = 0.05;
    }

    double Withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        return balance;
    }

    double Deposit(double amount)
    {
        balance += amount;
        return balance;
    }

    double ApplyInterest()
    {
        balance += (interestRate * balance);
        return balance;
    }

    double getBalance()
    {
        return balance;
    }   
};

int main()
{
    BankAccount account;

    account.Deposit(400);
    cout << "Balance: $" << account.getBalance() << endl;

    account.ApplyInterest();
    cout << "Balance: $" << account.getBalance() << endl;

    account.Withdraw(50);
    cout << "Balance: $" << account.getBalance() << endl;

    return 0;
}
