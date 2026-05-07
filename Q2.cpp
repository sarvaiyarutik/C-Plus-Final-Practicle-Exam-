
#include <iostream>
using namespace std;

class BankAccount
{

private:
    int accountNumber;
    float balance;
    string ownerName;

public:
    BankAccount(int number, float b, string name)
    {

        accountNumber = number;
        balance = b;
        ownerName = name;
    }

    void credit(float amount)
    {

        balance += amount;

        cout << amount << "credited sucessfully" << endl;
    }

    void debit(float amount)
    {

        if (amount > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else
        {
            balance -= amount;

            cout << amount << "  Debited Successffuly " << endl;
        }
    }

    void DisplayBalance()
    {

        cout << "Account Number  :" << accountNumber << endl;
        cout << "Account Balance :" << balance << endl;
        cout << "Owner Name      :" << ownerName << endl;
    }
};

int main()
{
    BankAccount b1(10, 10000, "Rutik");

    cout << endl;

    b1.credit(5000);

    b1.DisplayBalance();

    cout << endl;

    b1.debit(2000);
    b1.DisplayBalance();

    return 0;
}