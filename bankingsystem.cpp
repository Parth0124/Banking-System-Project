#include <iostream>
#include <vector>
using namespace std;

class IndianCitizen {
private:
    double Aadhar;
    double PAN;
    string Name;
    string Address;
    int Age;

public:
    IndianCitizen(double a, double p, string n, string add, int age) : Aadhar(a), PAN(p), Name(n), Address(add), Age(age) {}

    // Getter and setter functions...

};

class SavingsAccount {
private:
    int Customer_ID;
    double balance;
    vector<string> transactions;

public:
    SavingsAccount(int ID) : Customer_ID(ID), balance(0) {}

    void debit(double amount) {
        cout << "Enter the amount you wish to withdraw: " << endl;
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient funds. Cannot withdraw." << endl;
            return;
        }
        balance -= amount;
        cout << "Amount debited" << endl;
        cout << "The remaining balance is: " << balance << endl;
        transactions.push_back("Debited amount: " + to_string(amount));
    }

    void credit(double amount) {
        cout << "Enter the amount you wish to credit: " << endl;
        cin >> amount;
        balance += amount;
        cout << "Amount credited" << endl;
        cout << "The updated account balance is: " << balance << endl;
        transactions.push_back("Credited amount: " + to_string(amount));
    }

    int get_Balance() {
        return balance;
    }

    void displayTransactions() {
        cout << "Transaction History:" << endl;
        for (const string& transaction : transactions) {
            cout << transaction << endl;
        }
    }
};

class CurrentAccount {
private:
    int Customer_ID;
    double balance;
    vector<string> transactions;

public:
    CurrentAccount(int ID) : Customer_ID(ID), balance(0) {}

    void debit(double amount) {
        cout << "Enter the amount you wish to withdraw: " << endl;
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient funds. Cannot withdraw." << endl;
            return;
        }
        balance -= amount;
        cout << "Amount debited" << endl;
        cout << "The remaining balance is: " << balance << endl;
        transactions.push_back("Debited amount: " + to_string(amount));
    }

    void credit(double amount) {
        cout << "Enter the amount you wish to credit: " << endl;
        cin >> amount;
        balance += amount;
        cout << "Amount credited" << endl;
        cout << "The updated account balance is: " << balance << endl;
        transactions.push_back("Credited amount: " + to_string(amount));
    }

    int get_Balance() {
        return balance;
    }

    void displayTransactions() {
        cout << "Transaction History:" << endl;
        for (const string& transaction : transactions) {
            cout << transaction << endl;
        }
    }
};

class LoanAccount {
private:
    int Customer_ID;
    double returnamount;
    vector<string> transactions;

public:
    LoanAccount(int ID) : Customer_ID(ID), returnamount(0) {}

    void debit(double amount) {
        cout << "Enter the amount you wish to withdraw from the bank: " << endl;
        cin >> amount;
        returnamount += amount;
        cout << "Withdraw completed" << endl;
        cout << "The amount you need to return to the bank is " << returnamount << endl;
        transactions.push_back("Debited amount: " + to_string(amount));
    }

    void credit(double amount) {
        cout << "Enter the amount you wish to deposit to the bank: " << endl;
        cin >> amount;
        returnamount -= amount;
        cout << "Deposit completed" << endl;
        cout << "The amount you need to return to the bank is " << returnamount << endl;
        transactions.push_back("Credited amount: " + to_string(amount));
    }

    int get_Balance() {
        return returnamount;
    }

    void displayTransactions() {
        cout << "Transaction History:" << endl;
        for (const string& transaction : transactions) {
            cout << transaction << endl;
        }
    }
};

int main() {
    double aadhar, pan;
    string n, add;
    int age;
    cout << "Enter Aadhar number:" << endl;
    cin >> aadhar;
    cout << "Enter PAN number:" << endl;
    cin >> pan;
    cout << "Enter name:" << endl;
    cin >> n;
    cout << "Enter Address:" << endl;
    cin >> add;
    cout << "Enter Age:" << endl;
    cin >> age;
    IndianCitizen I1(aadhar, pan, n, add, age);

    int choice;
    do {
        cout << "Enter your choice: " << endl;
        cout << "1. Savings Account" << endl;
        cout << "2. Current Account" << endl;
        cout << "3. Loan Account" << endl;
        cout << "4. Exit" << endl;  // Option to exit the loop
        cin >> choice;

        switch (choice) {
        case 1: {
            int id;
            double value;
            int z; // for option with functions
            cout << "Enter the customer id: " << endl;
            cin >> id;
            SavingsAccount s1(id);
            do {
                cout << "Press 1 for Debit, 2 for credit, 3 for displaying the balance, 4 for displaying the transaction history, and 5 to go back to the main menu." << endl;
                cin >> z;
                switch (z) {
                case 1:
                    s1.debit(value);
                    break;
                case 2:
                    s1.credit(value);
                    break;
                case 3:
                    cout << "The balance in the account is " << s1.get_Balance() << endl;
                    break;
                case 4:
                    s1.displayTransactions();
                    break;
                case 5:
                    break;
                default:
                    cout << "Please choose a valid option" << endl;
                    break;
                }
            } while (z != 5);
            break;
        }
        case 2: {
            int id;
            double value;
            int z; // for option with functions
            cout << "Enter the customer id: " << endl;
            cin >> id;
            CurrentAccount c1(id);
            do {
                cout << "Press 1 for Debit, 2 for credit, 3 for displaying the balance, 4 for displaying the transaction history, and 5 to go back to the main menu." << endl;
                cin >> z;
                switch (z) {
                case 1:
                    c1.debit(value);
                    break;
                case 2:
                    c1.credit(value);
                    break;
                case 3:
                    cout << "The balance in the account is " << c1.get_Balance() << endl;
                    break;
                case 4:
                    c1.displayTransactions();
                    break;
                case 5:
                    break;
                default:
                    cout << "Please choose a valid option" << endl;
                    break;
                }
            } while (z != 5);
            break;
        }
        case 3: {
            int id;
            double value;
            int z; // for option with functions
            cout << "Enter the customer id: " << endl;
            cin >> id;
            LoanAccount l1(id);
            do {
                cout << "Press 1 for Debit, 2 for credit, 3 for displaying the balance, 4 for displaying the transaction history, and 5 to go back to the main menu." << endl;
                cin >> z;
                switch (z) {
                case 1:
                    l1.debit(value);
                    break;
                case 2:
                    l1.credit(value);
                    break;
                case 3:
                    cout << "The balance in the account is " << l1.get_Balance() << endl;
                    break;
                case 4:
                    l1.displayTransactions();
                    break;
                case 5:
                    break;
                default:
                    cout << "Please choose a valid option" << endl;
                    break;
                }
            } while (z != 5);
            break;
        }
        case 4:
            cout << "Exiting the program." << endl;
            break;
        default:
            cout << "Please choose a valid option" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
