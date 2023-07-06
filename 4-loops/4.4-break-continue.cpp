#include <iostream>
using namespace std;

int main() {

    for(int i = 1;i<=5;i++){
        if(i==2){
             break;
        }
            cout << "Break: " << i << endl;
    }

    for(int j = 1;j<=5;j++){
        if(j==2){
             continue;
        }
         cout << "Continue: " << j << endl;
    }

return 0;

}
