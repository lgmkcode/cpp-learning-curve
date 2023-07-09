#include <iostream>
using namespace std;

int main(){


int x[3] = {1, 2, 3};
int *q;
q = x; // q = &x[0]
cout << q[2] << endl;
q[2] = 8;
cout << q[2] << endl;
int *qq;
qq = x;
// qq[2] = q[2] = x[2]

return 0;
}
