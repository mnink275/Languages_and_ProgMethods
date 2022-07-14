#include <iostream>
#include "SavingAccount.h"


double SavingAccount::annualInterestRate = 0.03;

void SavingAccount::modifyInterestRate(int interest) {
    annualInterestRate = interest/100.0;
}

SavingAccount::SavingAccount(double balance) {
    savingBalance = balance;
}

double SavingAccount::calculateMothlyInterest() {
    return (savingBalance * annualInterestRate) / 12; 
}

void SavingAccount::balanceIncrease() {
    savingBalance +=calculateMothlyInterest();
}

void SavingAccount::balancePrint() {
    std::cout << "current balance: " << savingBalance << std::endl;
}