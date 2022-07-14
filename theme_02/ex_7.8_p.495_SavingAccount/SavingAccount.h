#ifndef SavingAccount_h
#define SavingAccount_h


class SavingAccount {
public:
    SavingAccount(double = 0.);
    double calculateMothlyInterest();
    void balanceIncrease();
    void balancePrint();
    static void modifyInterestRate(int);
private:
    double savingBalance;
    static double annualInterestRate;     
};


#endif
