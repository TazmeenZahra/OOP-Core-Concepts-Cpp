// Create a bank account that uses public and private access specifiers.
#include <iostream>
using namespace std;
class BankAccount
{
    private:
    string accountHolderName;
    string accountNumber;
    double balance;

    bool validateAmount (double amount)
    {
        if (amount >= 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public:
    void deposit (double amount)
    {
        balance += amount;
        cout << "New balance: " << balance << endl;
    }
    void withdraw (double amount)
    {
        if (balance >= amount)
        {
            cout << "New balance after withdrawl: " << balance - amount << endl;
        }
        else
        {
            cout << "Insufficient balance.";
        }
    }
    void displayAccountInfo ()
    {
        cout << "Displaying Account Information: " << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Acount Balance: " << balance << endl;
    }
    BankAccount()
    {
        accountHolderName = "Tazmeen";
        accountNumber = "404678";
        balance = 45000.50;
        displayAccountInfo();
    }
};

int main()
{
    BankAccount h1;
    double amount;
    cout << "Enter amount: "; cin >> amount;
    h1.deposit(amount);
    h1.withdraw(amount);
    return 0;
}
