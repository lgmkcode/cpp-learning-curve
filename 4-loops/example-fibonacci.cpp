#include <iostream>
using namespace std;

int main(){

int n, n1=1, n2=1;
cout << "Enter a number: ";
cin >> n;

    if(n<=0);

    else if(n == 1){
        cout << n1 << endl;
    }

    else{
        cout << n1 << endl << n2 << endl;
	for(int i=0; i<n-2;i++){
            int n3= n1+n2;
            n1 = n2;
            n2 = n3;
            cout << n3 << endl;
        }
    }

return 0;
}
