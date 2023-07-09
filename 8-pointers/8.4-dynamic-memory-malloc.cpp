#include <iostream>
using namespace std;

void f(int *p){
    *p = 10;
}


int main(){

int a[3];
int *p = (int *)malloc(sizeof(int)*3); //If we write "int *p;" we get a segmentation error.
p[2] = 6;
cout << p[2] << endl;;

int *q = (int *)malloc(sizeof(int));
//(void *)malloc(sizeof(int)); --> If (int *) is not typed, it is generated from (void *).
*q = 50;
cout << *q << endl;
f(q);
cout << *q << endl;
return 0;
}
