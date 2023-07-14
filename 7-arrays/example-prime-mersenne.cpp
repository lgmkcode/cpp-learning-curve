#include <iostream>
using namespace std;

int exp(int a, int b){

int result=1;
    for(int i=0;i<b;i++){
        result *= a;
    }
    return result;
}


bool prime(int x){
    for(int i=2;i<x;i++){
        if(x%i == 0){
            return false;
        }
    }
return true;
}


int main(){

int j = 0;
for(int i=0;j<10;i++){
    if(prime(exp(2,i)-1)){
        cout << exp(2,i)-1 << endl;
        j++;
    }
}
return 0;
}
