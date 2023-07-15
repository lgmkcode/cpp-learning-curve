#include <iostream>
using namespace std;

int main(){

int a[7] = {3,7,2,8,9,6};

    for(int j=0;j<3;j++){
        int tmp = a[j];

        for(int i=j; i<7;i++){
            if(a[i]>tmp){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    cout << j+1 << ". largest number: " << tmp <<endl;
    }
return 0;
}
