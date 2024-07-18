#include<iostream>
using namespace std;

int main(){

    //variable declaration
    int score;
    string fullname,course,grade;

    //Ask for student's details
    cout << "Enter student's full name: ";
    cin>>fullname;
    cout << "Enter course: ";
    cin >> course;
    cout << "Enter score: ";
    cin >> score;

    //Grading
    if (score >= 70) {
        grade = "A";
    } 
    else if (score >= 60) {
        grade = "B";
    } 
    else if (score >= 50) {
        grade = "C";
    } 
    else if (score >= 40) {
        grade = "D";
    } 
    else if (score >= 0) {
        grade = "F";
    } 
    else {
        grade = "Invalid score";
    }

    cout<< fullname << course << grade << "\n";

    return 0;
}
