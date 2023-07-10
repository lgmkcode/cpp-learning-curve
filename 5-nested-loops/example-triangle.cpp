#include <iostream>
using namespace std;

int main(){

cout << "Enter the size: ";
int size;
cin >> size;

for(int i=0;i<size;i++){

    for(int j=0;j<size;j++){  //for(int j=0; j<i+1;j++) and don't use if-else line.
        if(i>=j){             // if(j+i >= size-1)
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
cout << endl;

}


return 0;
}
