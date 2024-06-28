class Account:
    def __init__(self):
        self.balance: float = 0.0
        self.name: str = ''
        self.pin: str = ''
    
    def check_balance(self, pin: str) -> None:
        if pin == self.pin:
            print(f"Current Balance: {self.balance}")
        else:
            print("Invalid Pin\nTry again")
    
    def set_up(self) -> None:
        self.name = input("Enter your Name: ")
        self.pin = input("Enter your Pin: ")
    
    def deposit(self) -> None:
        try:
            amount = float(input("Enter the amount to deposit: "))
            if amount <= 0:
                print("Invalid Amount\nTry again")
            else:
                self.balance += amount
                print(f"Amount {amount} deposited. New balance: {self.balance}")
        except ValueError:
            print("Invalid input. Please enter a numeric value.")
        
    def withdraw(self) -> None:
        try:
            amount = float(input("Enter the amount to withdraw: "))
            if amount > self.balance:
                print("Insufficient funds\nTry again")
            elif amount <= 0:
                print("Invalid Amount\nTry again")
            else:
                self.balance -= amount
                print(f"Amount {amount} withdrawn. New balance: {self.balance}")
        except ValueError:
            print("Invalid input. Please enter a numeric value.")

def main():
    accounts = {}

    while True:
        print("\n1. Create Account")
        print("\n2. Deposit")
        print("\n3. Withdraw")
        print("\n4. Check Balance")
        print("\n5. Exit")
        
        choice = input("Select an option: ")

        if choice == '1':
            account = Account()
            account.set_up()
            accounts[account.name] = account
            print(f"Account for {account.name} created successfully.")
        
        elif choice == '2':
            name = input("Enter your Name: ")
            if name in accounts:
                pin = input("Enter your Pin: ")
                accounts[name].check_balance(pin)  # Just to validate the pin
                accounts[name].deposit()
            else:
                print("Account not found.")
        
        elif choice == '3':
            name = input("Enter your Name: ")
            if name in accounts:
                pin = input("Enter your Pin: ")
                accounts[name].check_balance(pin)  # Just to validate the pin
                accounts[name].withdraw()
            else:
                print("Account not found.")
        
        elif choice == '4':
            name = input("Enter your Name: ")
            if name in accounts:
                pin = input("Enter your Pin: ")
                accounts[name].check_balance(pin)
            else:
                print("Account not found.")
        
        elif choice == '5':
            print("Exiting the program. Goodbye!")
            break
        
        else:
            print("Invalid choice. Please select a valid option.")

if __name__ == "__main__":
    main()

