// week01-task-c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int idNumber = 0;
    std::string accountName = "";
    float balance = 0;
    float testBalance = 0;
    bool done = false;
    int choice = 0;
    float deposit = 0;
    float withdrawal = 0;

    std::cout << "Enter the name: " << std::endl;
    std::cin >> accountName;
    std::cout << "Enter the balance: " << std::endl;
    std::cin >> balance;

    std::cout << "Hello, " << accountName << " your balance is " << balance << std::endl;

    while (!done)
    {
        std::cout << "\nAccount Menu:\n";
        std::cout << "0. Quit Program\n";
        std::cout << "1. Display Account Information\n";
        std::cout << "2. Make a Deposit\n";
        std::cout << "3. Make a Withdrawal\n";
        std::cin >> choice;

        if (choice == 0) {
            done = true;
        }
        else if (choice == 1) {
            std::cout << "\nAccount ID: " << idNumber << " Name: " << accountName << " Balance: " << balance << std::endl;
        }
        else if (choice == 2) {
            std::cout << "\nEnter Deposit amount: \n";
            std::cin >> deposit;
            balance += deposit;
        }
        else if (choice == 3) {
            std::cout << "\nEnter Withdrawal amount: \n";
            std::cin >> withdrawal;
            testBalance = balance - withdrawal;
            if (testBalance < 0) {
                std::cout << "\nInsufficient funds for withdrawal\n";
            }
            else {
                balance = testBalance;
            }
        }
        else {
            std::cout << "Invalid Option\n";
        }
    }
    //std::cout << "Hello World!\n";
}


