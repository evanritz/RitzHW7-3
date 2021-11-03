// bankApp.cpp
// 
// This program takes no arguments 
// Using bankAccount.cpp to create 5 bank accounts
// and perform deposit and withdraw operations
// 
// Written by Evan
//

#include <iostream>

#include "bankAccount.h"

using namespace std;

int main(int argc, char* argv[]) {
    
    bankAccount jackAccount("Jack Smith", 50);

    bankAccount jillAccount("Jill Brian", 100);

    bankAccount bankArray[3] = {bankAccount("Ralph Kramden", 10), bankAccount("Alice Kramden", 20), bankAccount("Ed Norton", 30)};
    
    jackAccount.deposit(30);
    jillAccount.deposit(30);

    for (int i = 0; i < 3; i++)
        bankArray[i].deposit(30);

    jackAccount.withdraw(20);
    jillAccount.withdraw(20);
    
    for (int i = 0; i < 3; i++)
        bankArray[i].withdraw(20);

    cout << "Accounts:" << endl;
    cout << jillAccount.getName() << " $" << jillAccount.getBalance() << endl;
    cout << jackAccount.getName() << " $" << jackAccount.getBalance() << endl;
    
    for (int i = 0; i < 3; i++)
        cout << bankArray[i].getName() << " $" << bankArray[i].getBalance() << endl;

}
