#include <iostream>
using namespace std;
// non-recursive is called iterative
// without using multiplication
int multi(int a, int b){
    if(a == 0 || b == 0){
        return 0;
    }
    if(b<0){
        return multi(0-a,0-b);
    }
return a + multi(a, b-1);
}



int main(){

int a, b;
cout << "enter the first number:";
cin >> a;

cout << "enter the second number:";
cin >> b;

cout << "a*b=" <<multi(a,b);

}
