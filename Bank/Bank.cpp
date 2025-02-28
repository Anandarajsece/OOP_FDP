#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Bank {
private:
    struct Account {
        int accountNumber;
        string name;
        int pin;
        double balance;
    };

public:
    void mainMenu();
    void createAccount();
    void showAccount();
    void deposit();
    void withdraw();
    void transfer();
    bool login(int &loggedInAccount);
    int generateUniqueAccountNumber();
};

// Generate Unique Account Number (Ensures No Duplicates)
int Bank::generateUniqueAccountNumber() {
    ifstream file("Account.txt");
    int lastAccount = 1000; // Start from 1001

    Account acc;
    while (file >> acc.accountNumber >> acc.name >> acc.pin >> acc.balance) {
        lastAccount = acc.accountNumber;
    }
    file.close();
    return lastAccount + 1;
}

//  Create a New Account
void Bank::createAccount() {
    ofstream file("Account.txt", ios::app);
    Account acc;

    cout << "Enter your Name: ";
    cin >> acc.name;
    cout << "Set a 4-digit PIN: ";
    cin >> acc.pin;
    acc.accountNumber = generateUniqueAccountNumber();
    acc.balance = 0;

    file << acc.accountNumber << " " << acc.name << " " << acc.pin << " " << acc.balance << endl;
    file.close();

    cout << " Account Created Successfully! Your Account Number: " << acc.accountNumber << endl;
}

//  Show Account Details (After Login)
void Bank::showAccount() {
    int loggedInAccount;
    if (!login(loggedInAccount)) return;

    ifstream file("Account.txt");
    Account acc;
    
    while (file >> acc.accountNumber >> acc.name >> acc.pin >> acc.balance) {
        if (acc.accountNumber == loggedInAccount) {
            cout << "\n📜 Account Details:\n";
            cout << "-------------------------\n";
            cout << "Account Number: " << acc.accountNumber << endl;
            cout << "Name: " << acc.name << endl;
            cout << "Balance: $" << acc.balance << endl;
            cout << "-------------------------\n";
            break;
        }
    }
    file.close();
}

//  Deposit Money (After Login)
void Bank::deposit() {
    int loggedInAccount;
    if (!login(loggedInAccount)) return;

    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    ifstream file("Account.txt");
    ofstream tempFile("Temp.txt");
    Account acc;

    while (file >> acc.accountNumber >> acc.name >> acc.pin >> acc.balance) {
        if (acc.accountNumber == loggedInAccount) {
            acc.balance += amount;
            cout << " Deposited Successfully! New Balance: $" << acc.balance << endl;
        }
        tempFile << acc.accountNumber << " " << acc.name << " " << acc.pin << " " << acc.balance << endl;
    }

    file.close();
    tempFile.close();
    remove("Account.txt");
    rename("Temp.txt", "Account.txt");
}

//  Withdraw Money (After Login)
void Bank::withdraw() {
    int loggedInAccount;
    if (!login(loggedInAccount)) return;

    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    ifstream file("Account.txt");
    ofstream tempFile("Temp.txt");
    Account acc;
    bool success = false;

    while (file >> acc.accountNumber >> acc.name >> acc.pin >> acc.balance) {
        if (acc.accountNumber == loggedInAccount) {
            if (acc.balance >= amount) {
                acc.balance -= amount;
                success = true;
                cout << " Withdrawal Successful! New Balance: $" << acc.balance << endl;
            } else {
                cout << " Insufficient Funds!\n";
            }
        }
        tempFile << acc.accountNumber << " " << acc.name << " " << acc.pin << " " << acc.balance << endl;
    }

    file.close();
    tempFile.close();
    remove("Account.txt");
    rename("Temp.txt", "Account.txt");

    if (!success) {
        cout << " Withdrawal Failed!\n";
    }
}

//  Transfer Money (After Login)
void Bank::transfer() {
    int fromAcc;
    if (!login(fromAcc)) return;

    int toAcc;
    double amount;
    bool senderFound = false, receiverFound = false;
    Account sender, receiver, acc;

    cout << "Enter Receiver's Account Number: ";
    cin >> toAcc;
    cout << "Enter Amount to Transfer: ";
    cin >> amount;

    if (fromAcc == toAcc) {
        cout << " Cannot transfer money to the same account!\n";
        return;
    }

    ifstream file("Account.txt");
    ofstream tempFile("Temp.txt");

    while (file >> acc.accountNumber >> acc.name >> acc.pin >> acc.balance) {
        if (acc.accountNumber == fromAcc) {
            if (acc.balance >= amount) {
                sender = acc;
                sender.balance -= amount;
                senderFound = true;
            } else {
                cout << " Insufficient Balance!\n";
            }
        } else if (acc.accountNumber == toAcc) {
            receiver = acc;
            receiver.balance += amount;
            receiverFound = true;
        }
    }
    
    file.close();

    if (!senderFound) {
        cout << " Invalid Sender Account or PIN!\n";
        return;
    }

    if (!receiverFound) {
        cout << " Invalid Receiver Account!\n";
        return;
    }

    // Update File with New Balances
    file.open("Account.txt");
    while (file >> acc.accountNumber >> acc.name >> acc.pin >> acc.balance) {
        if (acc.accountNumber == sender.accountNumber)
            tempFile << sender.accountNumber << " " << sender.name << " " << sender.pin << " " << sender.balance << endl;
        else if (acc.accountNumber == receiver.accountNumber)
            tempFile << receiver.accountNumber << " " << receiver.name << " " << receiver.pin << " " << receiver.balance << endl;
        else
            tempFile << acc.accountNumber << " " << acc.name << " " << acc.pin << " " << acc.balance << endl;
    }

    file.close();
    tempFile.close();
    remove("Account.txt");
    rename("Temp.txt", "Account.txt");

    cout << " Transfer Successful! $" << amount << " sent to Account " << toAcc << ".\n";
}

//  Secure Login (Returns Logged-in Account Number)
bool Bank::login(int &loggedInAccount) {
    int inputAcc, inputPin;
    cout << "Enter Account Number: ";
    cin >> inputAcc;
    cout << "Enter PIN: ";
    cin >> inputPin;

    ifstream file("Account.txt");
    Account acc;
    while (file >> acc.accountNumber >> acc.name >> acc.pin >> acc.balance) {
        if (acc.accountNumber == inputAcc && acc.pin == inputPin) {
            loggedInAccount = inputAcc;
            cout << " Login Successful!\n";
            return true;
        }
    }

    cout << " Invalid Credentials!\n";
    return false;
}

//  Main Menu
void Bank::mainMenu() {
    int choice;
    do {
        cout << "\nBANK MANAGEMENT SYSTEM\n";
        cout << "1. Create Account\n2. Show Account\n3. Deposit\n4. Withdraw\n5. Transfer\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createAccount(); break;
            case 2: showAccount(); break;
            case 3: deposit(); break;
            case 4: withdraw(); break;
            case 5: transfer(); break;
            case 6: cout << "Thank you! Goodbye!\n"; return;
            default: cout << "Invalid Choice!\n";
        }
    } while (true);
}

int main() {
    Bank bank;
    bank.mainMenu();
    return 0;
}
