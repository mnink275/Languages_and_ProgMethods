#include <iostream>
#include "SavingAccount.cpp"


int main()
{
    SavingAccount saver1(2000.00);
    SavingAccount saver2(3000.00);
    
    for(int i = 1; i <= 12; i++) {
        if (i == 3) {
            SavingAccount::modifyInterestRate(4);
        }
        saver1.balanceIncrease();
        saver2.balanceIncrease();
        std::cout << "Balance at end of the " << i << " month: " << std::endl
                  << "saver1 ";
        saver1.balancePrint();
        std::cout << "saver2 ";
        saver2.balancePrint();
        std::cout << std::endl;
    }

    return 0;
}