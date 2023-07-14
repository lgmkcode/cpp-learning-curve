#include <iostream>
using namespace std;

int main(){

int y, x;
cout << "enter the number of lines:";
cin >> y;
cout << "enter the number of colmns:";
cin >> x;

for(int i=1; i<=y;i++){

    for(int j=1;j<=x;j++){
        cout << i*j << " ";
    }

cout << endl;

}

return 0;
}
