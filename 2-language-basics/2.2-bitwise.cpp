#include <iostream>
using namespace std;

int main(){

    int a = 10;
    cout << a << endl;

    int b = a << 2; // shift (*4)
    cout << b << endl;

    float c = a >> 2; // shift (/4)
    cout << c << endl;

    int d = 25 & 17; // bitwise and
    cout << d << endl;

    int e = 25 | 17; // bitwise or
    cout << e << endl;

    int f = 25 ^ 17; // bitwise exclusive or(xor): 1 if different, 0 if same.
    cout << f << endl;

}
