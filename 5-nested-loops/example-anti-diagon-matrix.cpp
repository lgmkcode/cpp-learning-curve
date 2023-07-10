#include <iostream>
using namespace std;

int main(){

cout << "Enter the size: ";
int size;
cin >> size;

for(int i=0;i<size;i++){

    for(int j=0;j<size;j++){
        if(i+j == size-1){ // if(i+j >= size-1)  // if(i = j) --> diagon matrix
            cout << 1;
        }
        else{
            cout << 0;
        }
    }

cout << endl;

}

return 0;
}

// can be used for drawing triangles with stars.

// In matrix operations, we use row and column numbers.
// 0001 0+3
// 0010 1+2
// 0100 2+1
// 1000 3+0
