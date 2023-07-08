#include <iostream>
using namespace std;

int factorial(int x){
    if(x==1)
        return 1;
    return x * factorial(x-1);
}

int main(){
int num;
cout << "Enter a number: ";
cin >> num;
cout << factorial(num);
    return 0;
}
