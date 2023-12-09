#include<iostream>
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

public:
    SavingsAccount(int ID) : Customer_ID(ID), balance(0) {}

    void debit(double amount) {
        cout << "Enter the amount you wish to withdraw: " << endl;
        cin >> amount;
        balance -= amount;
        cout << "Amount debited" << endl;
        cout << "The remaining balance is: " << balance << endl;
    }

    void credit(double amount) {
        cout << "Enter the amount you wish to credit: " << endl;
        cin >> amount;
        balance += amount;
        cout << "Amount credited" << endl;
        cout << "The updated account balance is: " << balance << endl;
    }

    int get_Balance() {
        return balance;
    }
};

class CurrentAccount {
private:
    int Customer_ID;
    double balance;

public:
    CurrentAccount(int ID) : Customer_ID(ID), balance(0) {}

    void debit(double amount) {
        cout << "Enter the amount you wish to withdraw: " << endl;
        cin >> amount;
        balance -= amount;
        cout << "Amount debited" << endl;
        cout << "The remaining balance is: " << balance << endl;
    }

    void credit(double amount) {
        cout << "Enter the amount you wish to credit: " << endl;
        cin >> amount;
        balance += amount;
        cout << "Amount credited" << endl;
        cout << "The updated account balance is: " << balance << endl;
    }

    int get_Balance() {
        return balance;
    }
};

class LoanAccount {
private:
    int Customer_ID;
    double returnamount;

public:
    LoanAccount(int ID) : Customer_ID(ID), returnamount(0) {}

    void debit(double amount) {
        cout << "Enter the amount you wish to withdraw from the bank: " << endl;
        cin >> amount;
        returnamount += amount;
        cout << "Withdraw completed" << endl;
        cout << "The amount you need to return to the bank is " << returnamount << endl;
    }

    void credit(double amount) {
        cout << "Enter the amount you wish to deposit to the bank: " << endl;
        cin >> amount;
        returnamount -= amount;
        cout << "Deposit completed" << endl;
        cout << "The amount you need to return to the bank is " << returnamount << endl;
    }

    int get_Balance()
    {
        return returnamount;
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
    cout << "Enter your choice: " << endl;
    cout << "1. Savings Account" << endl;
    cout << "2. Current Account" << endl;
    cout << "3. Loan Account" << endl;
    cin >> choice;

    switch (choice) {
    case 1: {
        int id;
        double value;
        int z; // for option with functions
        cout << "Enter the customer id: " << endl;
        cin >> id;
        SavingsAccount s1(id);
        cout << "Press 1 for Debit, 2 for credit and 3 for displaying the balance." << endl;
        cin >> z;
        if (z == 1) {
            s1.debit(value);
        }
        else if (z == 2) {
            s1.credit(value);
        }
        else if (z == 3) {
            cout << "The balance in the account is " << s1.get_Balance() << endl;
        }
        break;
    }
    case 2: {
        int id;
        double value;
        int z; // for option with functions
        cout << "Enter the customer id: " << endl;
        cin >> id;
        CurrentAccount c1(id);
        cout << "Press 1 for Debit, 2 for credit and 3 for displaying the balance." << endl;
        cin >> z;
        if (z == 1) {
            c1.debit(value);
        }
        else if (z == 2) {
            c1.credit(value);
        }
        else if (z == 3) {
            cout << "The balance in the account is " << c1.get_Balance() << endl;
        }
        break;
    }
    case 3: {
        int id;
        double value;
        int z; // for option with functions
        cout << "Enter the customer id: " << endl;
        cin >> id;
        LoanAccount l1(id);
        cout << "Press 1 for Debit, 2 for credit and 3 for displaying the balance." << endl;
        cin >> z;
        if (z == 1) {
            l1.debit(value);
        }
        else if (z == 2) {
            l1.credit(value);
        }
        else if (z == 3) {
            cout << "The balance in the account is " << l1.get_Balance() << endl;
        }
        break;
    }
    default:
        cout << "Please choose a valid option" << endl;
        break;
    }
    return 0;
}
