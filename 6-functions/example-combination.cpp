#include <iostream>
using namespace std;

int factorial(int x){

    int fact= 1;

    if(x<0){
        cout << "incorrect entry";
    }

    else if(x == 0){
        fact = 1;
    }

    else{
        for(x;x>0;x--){
            fact *= x;
        }
    }
return fact;
}

int combination (int n, int r){

return factorial(n) / (factorial(n-r)*factorial(r));


}


int main(){
int a, b;
cout << "Enter 'n': ";
cin >> a;
cout << "Enter 'r': ";
cin >> b;
cout << "combination: " << combination(a,b);

return 0;
}
