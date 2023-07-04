#include <iostream>
using namespace std;

int main(){

int a, b;
cout << "Enter the number a:";
cin >> a;
cout << "Enter the number b:";
cin >> b;

    if (a > b){
        cout << "The value of a is greater than b" << endl;
    }

    else if (b > a){
        cout << "The value of b is greater than a" << endl;
    }

    else{
        cout << "The values ​​of a and b are equal" << endl;
    }

return 0;

}
