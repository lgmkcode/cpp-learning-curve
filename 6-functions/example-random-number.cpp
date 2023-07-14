#include <iostream>
using namespace std;

int main(){

int rn;
srand(time(NULL)); //seed. 
//If we don't give the time(null) value, the same values ​​will always be returned.

rn = rand()%6 +1; //Returns numbers 1 to 6
cout << rn << endl;
rn = rand()%2;  // Returns numbers 0 to 1
cout << rn << endl;
rn = rand()%100 +1; // Returns numbers 1 to 100
cout << rn << endl;


return 0;
}
