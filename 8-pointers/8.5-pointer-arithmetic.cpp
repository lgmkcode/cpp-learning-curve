#include <iostream>
using namespace std;

int main() {

int *p;
p = (int *)malloc(sizeof(int)*5);

for(int i= 0; i<5;i++){
    cout << "Enter a number: ";
    cin >> *(p+i);
}

for(int i=0;i<5;i++){
    cout << *(p+i);
}


return 0;
}
