#include <iostream>
using namespace std;

int main(){

int a = 7;
int *p = &a;

cout << "a:" << a << endl;
cout << "*p:" << *p << endl;
cout << "&a:" << &a << endl;
cout << "p:" << p << endl;
cout << "&p:" << &p << endl;

return 0;
}
