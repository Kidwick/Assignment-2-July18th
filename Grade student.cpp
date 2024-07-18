#include<iostream>
using namespace std;

int main()
{

    //variable declaration
    int score;
    string fullname,course,grade;

    cout << "Enter student's full name: ";
    cin>>fullname;
    cout << "Enter course: ";
    cin >> course;
    cout << "Enter score: ";
    cin >> score;

    cout<<"\n1.score>=70\n.2 score>=60 &score<=69\n3.score>=50 &score<=59\n4.score>=40 &score<=49\n5.score<40\n"<<endl;

     switch (score) 
     {
        case 1:
        grade="A";
        break;

        case 2:
            grade="B";
        break;

        case 3:
            grade="C";
            break;

        case 4:
            grade = "D";
            break;
        
        case 5:
            grade = "F";
            break;
        default:
        
            grade = "Invalid score";
            
     }
        
    cout<< fullname<< course<< grade << "\n";

    return 0;
}
