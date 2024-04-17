#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(const std::string& accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {
        std::cout << "Account created with account number: " << accountNumber << std::endl;
    }
    ~BankAccount() {
        std::cout << "Account with account number " << accountNumber << " is destroyed" << std::endl;
    }

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited " << amount << " into account " << accountNumber << std::endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn " << amount << " from account " << accountNumber << std::endl;
        } else {
            std::cout << "Insufficient funds in account " << accountNumber << std::endl;
        }
    }

    void displayBalance() {
        std::cout << "Account " << accountNumber << " balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount myAccount("123456789", 1000.0);

    myAccount.displayBalance();
    myAccount.deposit(500.0);
    myAccount.displayBalance();
    myAccount.withdraw(200.0);
    myAccount.displayBalance();
    return 0;
}


