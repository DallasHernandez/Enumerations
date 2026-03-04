#include <iostream>
using namespace std;

enum TransactionType
{
    Deposit,
    Withdraw,
    CheckBalance,
    Exit,
};


int main()
{
    string user_input;
    TransactionType transaction;

    cout << "Enter transaction type (Deposit,Withdraw,Check Balance, Exit): ";
    cin >> user_input;

    if (user_input == "Deposit")
    {
        transaction = Deposit;

    }
    else if (user_input == "Withdraw")
    {
        transaction = Withdraw;
    }
    else if (user_input == "Check Balance")
    {
        transaction = CheckBalance;

    }
    else
    {
        transaction = Exit;
    }

    switch (transaction)
    {
    case Deposit:
        cout << "Opening Deposit Process....";
        break;
    case Withdraw:
        cout << "OPening Withdrawal Process....";
        break;
    case CheckBalance:
        cout << "Displaying Current Balance....";
        break;
    case Exit:
        cout << "Thank you.... Exiting";
        break;



    }

    return 0;


}
