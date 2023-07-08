#include <iostream>
using namespace std;

int main(){

int num, n, nnum=0, znum=0, pnum=0;
cout << "How many numbers to enter: ";
cin >> num;

    for(int i=0;i<num;i++){
        cout << "Enter a number: ";
        cin >> n;

        if(n<0){
            nnum++;
        }
        else if(n==0){
            znum++;
        }
        else{
            pnum++;
        }
    }
cout << "positives: " << (float)pnum/num << endl;
cout << "negatives: " << (float)nnum/num << endl;
cout << "zeros: " << (float)znum/num << endl;

return 0;
}
