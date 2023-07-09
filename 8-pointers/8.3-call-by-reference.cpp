#include <iostream>
using namespace std;

void g(int x){ //call by value
    x = 30;
}


void f(int *x){ // call by reference
    *x = 70;
}


int main(){

int a = 10;
int *p = &a;
g(a);
cout << a << endl;
f(p);
cout << a << endl;


return 0;
}
