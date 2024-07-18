#include<iostream>
using namespace std;

int main(){
    //variable declaration
    int time = 0;

    //Switch case
        switch (time>5) {
        case 0:
          cout << "Red\n";
             break;
        case 1:
          cout << "Yellow\n";
              break;
        case 2:
            cout << "Green\n";
               break;
            }
            
            time++;
        
        return 0;
}