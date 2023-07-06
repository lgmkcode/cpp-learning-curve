#include <iostream>
using namespace std;

int main(){

int i, sum = 0, count = 0;

while(true){
    cout << "Enter a number: ";
    cin >> i;

    if(i==-1){
        break;
    }
    sum += i;
    count++;
}

cout << "Average of numbers written until -1 is entered: " << (float)sum/count;

return 0;
}
