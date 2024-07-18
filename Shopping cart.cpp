#include<iostream>
using namespace std;

int main(){
    //variable declaration
    double Amount,discount,totalamount;

    cout << "Enter the amount purchased: ";
    cin >> Amount;

    //if..else if
        if (Amount > 1000) {
            discount = 0.10;
        } 
        else if (Amount > 500) {
            discount = 0.5;
        } 
        else {
            discount = 0;
        }
        
        // Calculation of discount
    totalamount = Amount * (1 - discount);
    cout << "Net cost is: Ksh" << totalamount << "\n";

    return 0;
}