#include <iostream>
#include <vector>
#include <string>

using namespace std;

const string BOLD = "\033[1m"; 
const string RED_TEXT = "\033[31m";  
const string BLUE_TEXT = "\033[34m";
const string YELLOW_TEXT = "\033[33m";
const string GREEN_TEXT = "\033[32m";
const string RESET = "\033[0m"; 
const string UNDER_LINE = "\033[21m";

class _account {
public:
    string name;
    int account_number;
    string pin;
    int balance;

    void set_balance(int val) {
        balance = val;
    }

    int get_balance() const {
        return balance;
    }

    // Constructor to initialize an account
    _account(string name, int account_number, string pin, int balance)
        : name(name), account_number(account_number), pin(pin), balance(balance) {}
};

void show_menu_1();
void show_menu_2();
void new_account(vector<_account>& database);
void existing_account(vector<_account>& database);
void press_enter_to_continue();

int main() {
    vector<_account> database;
    int option_1;

    while (true) {
        system("clear");
        show_menu_1();
        cin >> option_1;

        switch (option_1) {
            case 1:
                new_account(database);
                break;

            case 2:
                existing_account(database);
                break;

            case 3:
                cout << "Exiting the program." << endl;
                return 0;

            default:
                cout << "Invalid option, please try again." << endl;
            }
        
        press_enter_to_continue();
    }

    return 0;
}

void show_menu_1() {
    cout << BOLD << UNDER_LINE << BLUE_TEXT << "Main Menu:" << RESET << BOLD << endl;
    cout << "\t1. New Account" << endl;
    cout << "\t2. Existing Account" << endl;
    cout << "\t3. Exit" << endl;
    cout << YELLOW_TEXT << "Choose the above option: " << RESET;
}

void show_menu_2() {
    cout << BOLD << UNDER_LINE << BLUE_TEXT << "Account Menu: " << RESET << BOLD << endl;
    cout << "\t1. Withdraw" << endl;
    cout << "\t2. Deposit" << endl;
    cout << "\t3. Balance" << endl;
    cout << "\t4. Exit" << endl;
    cout << YELLOW_TEXT << "Choose the above option: " << RESET;
}

void new_account(vector<_account>& database) {
    system("clear");
    cout << BLUE_TEXT << BOLD << "Creating new account..." << endl;

    string name;
    int account_number;
    string pin;
    int balance;
    
    cout << YELLOW_TEXT << BOLD << "Name \t\t:" << RESET;
    cin >> name;

    cout << YELLOW_TEXT << BOLD << "Account Number  :" << RESET;
    cin >> account_number;

    cout << YELLOW_TEXT << BOLD << "Set Pin \t:" << RESET;
    cin >> pin;

    //cout << "Initial Balance: ";
    //cin >> balance;

    // Optionally, validate unique account number
    for (const auto& acc : database) {
        if (acc.account_number == account_number) {
            cout << BOLD << endl;
            cout << RED_TEXT;
            cout << "Account number already exists. Try again with a different number." << endl;
            cout << RESET;
            press_enter_to_continue();  
            return;
        }
    }

    _account new_acc(name, account_number, pin, 0);
    database.push_back(new_acc);
    cout << BOLD << GREEN_TEXT <<"Account Created Successfully" << RESET <<  endl;

    //press_enter_to_continue();
}

void existing_account(vector<_account>& database) {
    cout << BOLD << BLUE_TEXT << "Accessing existing account..." << RESET << endl;

    int account_number;
    string pin;
    cout << BOLD << YELLOW_TEXT << "Enter Account Number: " << RESET;
    cin >> account_number;

    cout << BOLD << YELLOW_TEXT << "Enter Pin: " << RESET;
    cin >> pin;

    bool found = false;
    for (auto& acc : database) {
        if (acc.account_number == account_number && acc.pin == pin) {
            found = true;
            int choice;
            bool flag = true;

            while (flag) {
                system("clear");
                show_menu_2();
                cin >> choice;

                int amount;
                switch (choice) {
                    case 1:
                        cout << BOLD << BLUE_TEXT << "Enter the Amount to Withdraw: " << RESET << endl;
                        cin >> amount;

                        if (acc.get_balance() < amount) {
                            cout << BOLD << RED_TEXT << "\nInsufficient Balance" << RESET << endl;
                            press_enter_to_continue();
                        } 
                        else {
                            acc.set_balance(acc.get_balance() - amount);
                            cout << BOLD << GREEN_TEXT << "\nWithdrawal successful." << YELLOW_TEXT << "\nNew balance is: " << RESET << acc.get_balance() << endl;
                            press_enter_to_continue();
                        }
                        break;

                    case 2:
                        cout << YELLOW_TEXT << BOLD << "Enter the Amount to Deposit: " << RESET << endl;
                        cin >> amount;

                        if (amount < 0) {
                            cout << BOLD << RED_TEXT << "\nInvalid amount. Deposit must be a positive value." << RESET << endl;
                            press_enter_to_continue();
                        } 
                        else {
                            acc.set_balance(acc.get_balance() + amount);
                            cout << BOLD << GREEN_TEXT << "\nDeposit successful." << YELLOW_TEXT << "\nNew balance is: " << RESET << acc.get_balance() << endl;
                            press_enter_to_continue();
                        }
                        break;

                    case 3:
                        cout << BOLD << YELLOW_TEXT << "Your Balance is: " << RESET << acc.get_balance() << endl;
                        press_enter_to_continue();
                        break;

                    case 4:
                        cout << BOLD << YELLOW_TEXT <<"Exiting the account menu." << endl;
                        flag = false;
                        break;

                    default:
                        cout << BOLD << RED_TEXT << "\nInvalid option, please try again." << RESET << endl;
                        cout ;
                        break;
                }
            }
            break;
        }
    }

    if (!found) {
        cout << BOLD << RED_TEXT << "\nInvalid account number or pin.\n" << RESET << endl;
        press_enter_to_continue();
    }
}

void press_enter_to_continue() {
    cout << "\nPress Enter to continue...";
    cin.ignore(); // Ignore any previous newline characters
    cin.get();    // Wait for the Enter key press
}