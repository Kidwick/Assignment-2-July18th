#include<iostream>
using namespace std;

int main(){
    // varibale declaration
    int age, customermonths;
    string name, crbstatus;
    double bankbalance;

    //Customer details
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your bank balance: ";
    cin >> bankbalance;
    cout << "Enter your CRB status (good/bad): ";
    cin >> crbstatus;
    cout << "Enter number of months as a customer: ";
    cin >> customermonths;

    //Condition to be met
    if (age > 22 && bankbalance > 50000 && crbstatus == "good" && customermonths > 6) {
        cout << "Customer is qualified for the loan.\n";
    } else {
        cout << "Customer is not qualified for the loan.\n";
    }

    return 0;
}