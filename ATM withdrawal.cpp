#include<iostream>
using namespace std;

int main(){
    //Variable declaration
   double accbalance,dailyLimit,withdrawalamount;


    //variable initialisation
    accbalance = 2000000.00;
    dailyLimit = 500000.00;

    //User input
    cout << "Enter amount to withdraw: ";
    cin >> withdrawalamount;

    //condition
    if (withdrawalamount > accbalance) {
        cout << "Insufficient funds.\n";
    } 
    else if (withdrawalamount > dailyLimit) {
        cout << "Daily Limit exceeded.\n";
    } 
    else {
        accbalance -= withdrawalamount;
        cout << "Successful Withdrawal.\n";
        cout << "Balance: Ksh" << accbalance << "\n";
    }

    return 0; 
}