#include <iostream>
using namespace std;

int main(){

int a[5], sum = 0, max, min;
cout << "enter five numbers:";
for(int i=0;i<5;i++){
    cin >> a[i];
    sum += a[i];

    max = a[0];
    min = a[0];

    if(a[i]>max){
        max = a[i];
    }
    if(a[i]<min){
        min = a[i];
    }
}
/*
max = a[0];
min = a[0];

for(int i=0; i<5; i++){
    if(a[i]>max){
        max = a[i];
    }
    if(a[i]<min){
        min = a[i];
    }
}
*/
cout << "The largest value of the sum of four numbers is " << sum-min;
cout << " and the smallest value is " << sum-max << endl;

return 0;
}
