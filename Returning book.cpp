#include<iostream>
using namespace std;

int main(){
    ///variable declaration
    int excessdays;
    string bookcategory;

    cout << "Enter book type (regular/storybook/Research book): ";
    cin >> bookcategory;
    cout << "Enter number of days late: ";
    cin >> excessdays;

    //variable initialisation
    //if....else if
    double fine;
    if (bookcategory == "regular") {
        if (excessdays <= 7) {
            fine = excessdays * 30;
        } else {
            fine = 7 *30 + (excessdays - 7) * 2.00;
        }
    } 
    else if (bookcategory == "storybook") {
        fine = excessdays * 10;
    } 
    else if (bookcategory == "Research book") {
        fine = excessdays * 20;
    } 
    else {
        fine = 0; 
    }

    if (fine >= 0) {
        cout << "The fine is: KSH" << fine << "\n";
    } 
    else {
        cout << "Invalid book type.\n";
    }

    return 0;
}