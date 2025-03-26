#include <iostream>

// Classes
class Account {
// Access specifier
private:

    // Properties of class
    std::string name;
    int accountNumber;
    double balance;

public:

    // Methods

    void setAccNumber () { // Setting account number
        int accNum;
        std::cout << "Type account number: ";
        std::cin >> accNum;
        accountNumber = accNum;

    }

    int getAccNumber () { // Displaying account number
        return accountNumber;

    }

    void setName () { // Setting name of customer
        std::string n;
        std::cout << "Type Name: ";
        std::cin >> n;
        name = n;
    }

    std::string getName () { // Printing name of customer
        return name;
    }

    void setBalance () { // Setting initial balance
        double b;
        std::cout << "Type balance: ";
        std::cin >> b;
        balance = b;
    }

    double getBalance () { // Getting balance
        return balance;
    }

    void setDeposit () { // Set amount of deposit and adding to balance
        double amount;
        std::cout << "Enter amount of deposit: ";
        std::cin >> amount;
        if (amount > 0) {
            balance += amount;
        }

        else
            std::cout << "Invalid amount\n";
    }

    void setWithdraw () { // Setting amount of withdraw and subtracting from balance
        double amount2;
        std::cout << "Enter amount of withdraw: ";
        std::cin >> amount2;
        if (amount2 > 0 && amount2 <= balance) {
            balance -= amount2;
        }
        else if (amount2 > balance && amount2 > 0) { // Condition in which the amount is higher than balance
            std::cout << "Insuficient balance.\n";
        }

    }

    void getInfo () { // Getting info from user
        setName();
        setAccNumber();
        setBalance();
        setDeposit();
        setWithdraw();
    }

    void displayInfo () { // Displaying info
        std::cout << "Customer's Name: " << getName() << "\n";
        std::cout << "Customer's Account number: " << getAccNumber() << "\n";
        std::cout << "New balance after deposit/withdraw: " << getBalance() << "\n" ;
    }


};
int main()
{



    for (int i = 0; i < 3; i++) { // Loop created to run 3 times and create
        Account customer;    // an object each time it runs.
        customer.getInfo();
        customer.displayInfo();
    }


    return 0;
}
