#include <iostream>
#include <math.h>
using namespace std;
int main(){

int a[7] = {1,3,5,7,3,2,9};
int sum=0;
int multi = 1;
int odd = 0, co=0;
int even = 0, ce=0;

for(int i=0;i<7;i++){
    sum += a[i];
    multi *= a[i];

    if(a[i]%2 == 0){
        even += a[i];
        co++;
    }

    if(a[i]%2 == 1){
        odd  += a[i];
        ce++;
    }



}
cout << "arithmetic mean:" << (float)sum/7 << endl;
cout << "geometric mean:" << pow(multi,(float)1/7) << endl;
cout << "arithmetic mean of the even numbers:" << (float)even/co << endl;
cout << "arithmetic mean of the odd numbers:" << (float)odd/ce << endl;
return 0;
}
