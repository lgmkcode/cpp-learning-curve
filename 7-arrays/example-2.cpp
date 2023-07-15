#include <iostream>
using namespace std;
int main(){

int a[7] = {1,3,5,7,3,2,9};
int sum=0;

for(int i=0;i<7;i++){
    sum += a[i];
}
cout << "average of the numbers:" << (float)sum/7 << endl;

return 0;
}
