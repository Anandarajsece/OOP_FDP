//Bank management system using file handling
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
int accountNumber;
int pin;
int balance;
class Menu
{
    public:
        void mainMenu();
        void createAccount();
        void showAccount();
        void deposit();
        void login();
        int getLastAccountNumber();
        void withdraw();
        void Transfer();
        void welcomeScreen();
};
void Menu::login()
{
    int accountNumber;
    int pin;
    cout<<"Enter account number: ";
    cin>>accountNumber;
    cout<<"Enter pin: ";
    cin>>pin;
    ifstream file;
    file.open("Account.txt",ios::in);
    while(file>>accountNumber>>pin)
    {
        if(accountNumber==accountNumber && pin==pin)
        {
            cout<<"Login successful"<<endl;
            break;
        }
    }
    file.close();
}
void Menu::mainMenu()
{
    int choice;
    cout<<"1. Create Account"<<endl;    
    cout<<"2. Show Account"<<endl;
    cout<<"3. Deposit"<<endl;
    cout<<"4. Withdraw"<<endl;
    cout<<"5. Transfer"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice==1)
    {
        createAccount();
        mainMenu();
    }
    else if(choice==2)
    {
        //login();
        showAccount();
        mainMenu();
    }
    else if(choice==3)
    {
        deposit();
        mainMenu();
    }
    else if(choice==4)
    {
        withdraw();
        mainMenu();
    }
    else if(choice==5)
    {
        Transfer();
        mainMenu();
    }
    else if(choice==6)
    {
        cout<<"Thank you for using our service"<<endl;
    }
    else
    {
        cout<<"Invalid choice"<<endl;
        mainMenu();
    }
}
int Menu::getLastAccountNumber()
{
    ifstream file;
    int lastAccountNumber=1000;
    file.open("Account.txt",ios::in);
    while(file>>accountNumber>>pin)
    {
    lastAccountNumber=accountNumber;
    }
    file.close();
    
    return lastAccountNumber;
}
void Menu::createAccount()
{
    ofstream file;
    file.open("Account.txt",ios::app);
    char name[50];
    cout<<"Enter name: ";
    cin>>name;
    accountNumber=getLastAccountNumber()+1;
    balance=0;
    cout<<"Enter pin: ";
    cin>>pin;
    file<<accountNumber<<" "<<name<<" "<<pin<<" "<<balance<<endl;
    cout<<name<<"Account created successfully "<<"Acc No"<<accountNumber<<endl;
    file.close();
}
void Menu::showAccount()
{
    cout<<"Enter account number: ";
    cin>>accountNumber;
    cout<<"Enter pin: ";
    cin>>pin;
    ifstream file;
    file.open("Account.txt",ios::in);
    while(file>>accountNumber>>pin)
    {
        if(accountNumber==accountNumber && pin==pin)
        {
            cout<<"Account Number: "<<accountNumber<<endl;
            cout<<"Pin: "<<pin<<endl;
            cout<<"Balance: "<<balance<<endl;
            break;
        }
        
    }
    file.close();
}
void Menu::welcomeScreen()
{
    cout<<"**********************************"<<endl;
    cout<<"Welcome to Bank Management System"<<endl;
    cout<<"**********************************"<<endl;
}
void Menu::deposit()
{
    int amount;
    cout<<"Enter account number: ";
    cin>>accountNumber;
    cout<<"Enter pin: ";
    cin>>pin;
    cout<<"Enter amount to deposit: ";
    cin>>amount;
    ifstream file;
    ofstream tempFile;
    file.open("Account.txt",ios::in);
    tempFile.open("temp.txt",ios::out);
    while(file>>accountNumber>>pin)
    {
        if(accountNumber==accountNumber)
        {
            balance+=amount;
            tempFile<<accountNumber<<" "<<pin<<" "<<balance<<endl;
        }
    }
    cout<<"Amount deposited successfully"<<endl;
    cout<<"New balance: "<<balance<<endl;
    file.close();
    tempFile.close();
    remove("Account.txt");
    rename("temp.txt","Account.txt");

}
void Menu::withdraw()
{
    int amount;
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    ifstream file;
    ofstream tempFile;
    file.open("Account.txt",ios::in);
    tempFile.open("temp.txt",ios::out);
    while(file>>accountNumber>>pin)
    {
        tempFile<<accountNumber<<" "<<pin<<endl;
        if(accountNumber==1000)
        {
            tempFile<<amount<<endl;
        }
    }
    file.close();
    tempFile.close();
    remove("Account.txt");
    rename("temp.txt","Account.txt");
    cout<<"Amount withdrawn successfully"<<endl;
}
void Menu::Transfer()
{
    int amount;
    cout<<"Enter amount to transfer: ";
    cin>>amount;
    ifstream file;
    ofstream tempFile;
    file.open("Account.txt",ios::in);
    tempFile.open("temp.txt",ios::out);
    while(file>>accountNumber>>pin)
    {
        tempFile<<accountNumber<<" "<<pin<<endl;
        if(accountNumber==1000)
        {
            tempFile<<amount<<endl;
        }
    }
    file.close();
    tempFile.close();
    remove("Account.txt");
    rename("temp.txt","Account.txt");
    cout<<"Amount transferred successfully"<<endl;
}
int main()
{
    Menu menu;
    menu.welcomeScreen();
    menu.mainMenu();
    return 0;
}
