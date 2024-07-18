#include<iostream>
using namespace std;

int main(){
    //variable declaration
    int num1,num2;

    //Ask input of two numbers
    cout << "Enter first number: ";
    cin >>num1;
    cout<< "Enter second number: ";
    cin>>num2;

    //switch case
    switch (num1 > num2) {
        case 1:
            cout << "Maximum number: " << num1 << "\n";
            break;
        case 0:
            cout << "Maximum number: " << num2 << "\n";
            break;
    }

    return 0;
}