#include <iostream>
using namespace std;

int process(int *a, int size){

int max = a[0], min = a[0];
    for(int i=0;i<size;i++){
        if(a[i]>max){
            max = a[i];
        }

        if(a[i]<min){
            min = a[i];
        }
    }
return max-min;
}

int main(){

int b[7] = {3,6,1,-7,9,0,-5};
cout << "Difference between largest and smallest number: " <<  process(b,7);



return 0;
}
