#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double);
double deposit();
double withdraw(double);

int main(){

    double balance = 0;
    int choice = 0;

    do {
        cout << "*******************\n";
        cout << "Enter your choice:\n";
        cout << "*******************\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw money\n";
        cout << "4. Exit\n";
        cin >> choice;

        cin.clear();            // clear the input buffer
        fflush(stdin);

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Thanks!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance){
    cout << "Your balance is: $" << setprecision(2) << fixed << balance << '\n' << '\n';
}

double deposit(){
    double amount = 0;

    cout << "Enter the amount to be deposited: ";
    cin >> amount;

    if(amount > 0){
        return amount;
    } else {
        cout << "That's not a valid amount\n";
        return 0;
    }

    return amount;
}

double withdraw(double balance){
    double amount = 0;

    cout << "Enter the amount to be withdrawn: ";
    cin >> amount;

    if(amount > balance){
        cout << "Insufficient funds\n";
        return 0;
    } else if (amount < 0){
        cout << "That's not a valid amount\n";
        return 0;
    } else {
        return amount;
    }
}