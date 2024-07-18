#include<iostream>
using namespace std;

int main(){
    int age;
    string movietype;
    double ticketPrice;

    //User input
    cout << "Enter the age of the customer: ";
    cin >> age;
    cout << "Enter the type of movie (2D/3D): ";
    cin >> movietype;

    //condition 
    if (age < 13) {
        ticketPrice = (movietype == "3D") * 500;
    } 
    else if (age <= 40 && age>=14) {
        ticketPrice = (movietype == "3D") * 800;
    } 
    else {
        ticketPrice = (movietype == "regular") * 300;
    }

    cout << "Your ticket costs: Ksh" << ticketPrice << "\n";

    return 0;
}