#include <iostream>
#include <string>

#include "bankAccount.h"

using namespace std;

bankAccount::bankAccount(string n, float bal) {
    setName(n);
    setBalance(bal);
}

void bankAccount::setName(string n) {
    customerName = n;
}

void bankAccount::setBalance(float bal) {
    balance = bal;
}

string bankAccount::getName() {
    return customerName;
}

float bankAccount::getBalance() {
    return balance;
}

void bankAccount::deposit(float dep) {
    balance += dep;
}

void bankAccount::withdraw(float draw) {
    balance -= draw;
}


