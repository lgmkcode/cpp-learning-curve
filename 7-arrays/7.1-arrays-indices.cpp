#include <iostream>
using namespace std;

int main(){

int a[4] = {1, 2, 4, 7};
cout << a[3] << endl;
cout << a[2] + a[1] << endl;
a[0] = 11;

    for(int i = 0;i<3;i++){
        cout << a[i] << endl;
    }

int b[3];
b[0] =1;
cin >> b[1];
cin >> b[2];

    for(int i = 0;i<3;i++){ 
        cout << "b" << i << ":" << b[i] << endl;
    }

return 0;
}
