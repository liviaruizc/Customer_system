## Bank Account Management System in C++
## Overview
This project is a basic implementation of a bank account management system using C++ classes. It allows a user to create an account with details like name, account number, and balance, and then perform deposit and withdrawal operations.

## Features
Set and get customer name, account number, and balance.

Deposit and withdraw amounts from the account.

Validate deposit and withdrawal amounts (ensure balance is sufficient for withdrawals).

Display account details after each operation.

## Code Explanation
Account Class: The Account class contains private properties for the customer's name, account number, and balance. It provides the following methods:

setAccNumber(): Sets the account number.

getAccNumber(): Retrieves the account number.

setName(): Sets the customer's name.

getName(): Retrieves the customer's name.

setBalance(): Sets the initial balance.

getBalance(): Retrieves the current balance.

setDeposit(): Accepts a deposit amount and adds it to the balance.

setWithdraw(): Accepts a withdrawal amount, checks if it’s valid, and subtracts it from the balance.

getInfo(): Prompts the user to input all necessary information (name, account number, balance, deposit, and withdrawal).

displayInfo(): Displays the customer's information, including the updated balance after deposit/withdrawal.

## Main Function: 
In the main() function, a loop is used to create three different customer accounts and interact with them. For each account, the user is prompted to input information, and the updated balance is displayed.

## Installation
To compile and run the code, you need:

A C++ compiler (e.g., g++ or clang++)

An IDE or text editor to write and modify the code (e.g., Visual Studio Code, Xcode, or any text editor of your choice)

## Compilation
Save the code in a file (e.g., bank_account.cpp).

Open a terminal and navigate to the directory where the file is located.

## Run the following command to compile the code:

g++ -o bank_account bank_account.cpp

## Run the compiled program:
./bank_account

## Usage
After running the program, it will prompt the user to enter the customer's name, account number, balance, deposit amount, and withdrawal amount for three different customers. The account information will be displayed, including the updated balance after the deposit and withdrawal operations.

## Sample Output:

Type Name: John
Type account number: 12345
Type balance: 1000
Enter amount of deposit: 500
Enter amount of withdraw: 300
Customer's Name: John
Customer's Account number: 12345
New balance after deposit/withdraw: 1200

Type Name: Alice
Type account number: 67890
Type balance: 2000
Enter amount of deposit: 1000
Enter amount of withdraw: 2500
Customer's Name: Alice
Customer's Account number: 67890
New balance after deposit/withdraw: 1500

Type Name: Bob
Type account number: 11223
Type balance: 500
Enter amount of deposit: 200
Enter amount of withdraw: 300
Customer's Name: Bob
Customer's Account number: 11223
New balance after deposit/withdraw: 400

## Dependencies
This project does not have any external dependencies.

## Contribution
Feel free to fork and improve the project. Contributions are always welcome!

## License
This project is open-source and free to use. No license has been specified, so you may use it in any way you like.

