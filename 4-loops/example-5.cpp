#include <iostream>
using namespace std;

int main(){

int sum = 0, j;
for(int i=0;i<5;i++){
    cout << "Enter a number: ";
    cin >> j;
    sum += j;
}

cout << "the average of the five numbers entered: "  << (float)sum/5;

return 0;
}
