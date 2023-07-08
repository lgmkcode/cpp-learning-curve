#include <iostream>
using namespace std;

int exp(int a, int b){

int result=1;
    for(int i=0;i<b;i++){
        result *= a;
    }
    return result;
}


int main(){

for(int i=1;i<=20;i++){
cout << exp(2,i)-1 << "\n";

}


return 0;
}
