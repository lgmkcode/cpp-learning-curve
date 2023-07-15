#include <iostream>
using namespace std;

int main(){

int a[3][3] = {1,3,5,2,4,6,9,2,5};
int b[3][3] = {6,4,8,1,2,4,7,2,2};
int c[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        c[i][j] = a[i][j] + b[i][j];
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout << c[i][j] << " ";
    }
cout << endl;
}

return 0;
}
