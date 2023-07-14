#include <iostream>
using namespace std;


int main(){

char c[11];
cout << "Enter a time in 07:05:02PM format:";
cin >> c;

if(c[8]=='P'){

char x[3];
x[0] = c[0];
x[1] = c[1];
x[2] = '\0';

int clock = 0;
clock = (x[0]-48)*10 + (x[1]-48)+12; // or use atoi(x) -> ascii to integer

c[0] = 48 + clock/10;
c[1] = 48 + clock%10;
c[8] = '\0';
cout << c;
}
else{
    c[8] = '\0';
}






return 0;
}
