#include<iostream>
using namespace std;

int main(){
    int choice, pie=3.142;
    cout << "Menu:\n";
    cout << "\n1. Calculate the area of a circle\n2. Calculate the area of a rectangle\n3. Calculate the area of a triangle\n4. Quit"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;

    //switch case
    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;
            cout << "Area of the circle: " << pie * radius * radius << "\n";
            break;
        }
        case 2: {
            double length, width;
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            cout << "Area of the rectangle: " << length * width << "\n";
            break;
        }
        case 3: {
            double base, height;
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            cout << "Area of the triangle: " << 0.5 * base * height << "\n";
            break;
        }
        case 4:
            cout << "Quit...\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}