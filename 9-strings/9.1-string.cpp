#include <iostream>
#include <cstring>
using namespace std;

int main(){

const char *s = "evren"; // You will use cons(tant, sabit) or define the array as s[]
cout << s << endl;
cout << s[3] << endl;

char c[6] = "evren";
cout << c << endl;

char a[4];
a[0]= 'e'; // "e" --> e, \0
a[1]= 'v';
a[2]= 'r';
a[3]= '\0'; // must be defined for a correct output
cout << a << endl;

// strcmp --> string compare
// returns 0 if they equal
// returns -1 if first string is small
// returns 1 if the second string is small

if(strcmp(c,s)==0){
    cout << "equal" << endl;
}
else{
    cout << "not equal" << endl;
}
return 0;
}
