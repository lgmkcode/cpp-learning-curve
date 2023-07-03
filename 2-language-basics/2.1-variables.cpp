#include <iostream>
using namespace std;

int main(){

    int a = 5;
    cout << a << endl;

    float pi = 3.14;
    cout << pi << endl;

    long tl = 4659374933;
    cout << tl << endl;

    char b = 'c';
    cout << b << endl;

    int newb = b;
    cout << newb << endl; // decimal value in ascii

    int ipi = pi;
    cout << ipi << endl; // integer part is taken

    float num = 8;
    cout << num << endl;

    int at = 64;
    char newat = at; // cout << (char)at << endl; --> type casting
    cout << newat << endl; // char value in ascii

return 0;

}
