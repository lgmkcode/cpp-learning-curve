#include <iostream>
using namespace std;

int main(){

int a[5];
for(int i=0;i<5;i++){
    cout << "Enter a number: ";
    cin >> a[i]; 
}

//max value
int max=a[0];
for(int i=0;i<5;i++){
    if(a[i]>max){
        max = a[i];
    }
}
cout << "Largest value of array is: " << max << endl;

//min value
int min=a[0];
for(int i=0;i<5;i++){
    if(a[i]<min){
        min = a[i];
    }
}
cout << "Smallest value of array is: " << min << endl;

// average and total
int sum = 0;
for(int i=0;i<5;i++){
    sum += a[i];
}
cout << "Average is: " << (float)sum/5 << endl;
cout << "Total is: " << sum << endl;



return 0;
}
