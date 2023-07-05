#include <iostream>
using namespace std;

int main() {

    int a = 3;
    cout << "Enter a number:";
    cin >> a;
    switch(a){
        case 1: cout << "Entered number 1." << endl;
            break; //If "break" is not used, other cases also work.
        case 2: cout << "Entered number 2." << endl;
            break; 
        default :
            cout << "Number not equal to 1 or 2" << endl;
  }

    return 0;
}
