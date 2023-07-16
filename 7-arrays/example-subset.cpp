#include <iostream>
using namespace std;

int main(){

    int m, n, count=0;

    cout << "Enter the number of elements of the first set:";
    cin >>m;
    int a[m];

    for(int i =0;i<m;i++){
        cout << "enter a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Enter the number of elements of the second set:";
    cin >>n;
    int b[n];

    for(int i =0;i<n;i++){
        cout << "enter b[" << i << "] = ";
        cin >> b[i];
    }

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            if(a[i]==b[j]){
                count++;
                break;
            }
        }
    }

    if(count == m){
        cout << "the first set is a subset of the second set";
    }
    else{
        cout << "the first set is not a subset of the second set";
    }

return 0;
}
