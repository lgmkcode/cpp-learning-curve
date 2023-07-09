#include <iostream>
using namespace std;

int main(){

cout << "Enter the size: ";
int size;
cin >> size;

for(int k=0; k<size;k++){

    for(int j = 1;j<=k;j++){
        cout << " ";
    }

    for(int i = k; i<size;i++){ //for(int i=1;i<=size-i+1;i++)
        cout << "*";
    }

cout << "\n";
}

return 0;
}
