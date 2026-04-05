#include <iostream>
using namespace std;

class BankAccount {
    static int accountCount;

private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) 
    {
        accountNumber = accNum;
        balance = initialBalance;
        accountCount++;
    }

    void deposit(double amount) 
    {
        balance += amount;
        cout << "Deposited: " << amount << ". New balance: " << balance << endl;
    }

    void withdraw(double amount) 
    {
        if (amount > balance) 
        {
            cout << "Insufficient balance!" << endl;
        } 
        else 
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << ". New balance: " << balance << endl;
        }
    }

    double getBalance() const 
    {
        return balance;
    }

    static int getAccountCount() 
    {
        return accountCount;
    }

    void display() const 
    {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

// Define the static variable outside the class
int BankAccount::accountCount = 0;

int main()
{
    BankAccount b1(1015, 1500.55);
    b1.display();
    b1.deposit(275.05);

    cout << "Current Balance: " << b1.getBalance() << endl;
    cout << "Total  No of Accounts: " << BankAccount::getAccountCount() << endl;

    b1.withdraw(146.22);
    b1.display();

    return 0;
}
