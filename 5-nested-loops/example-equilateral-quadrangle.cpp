#include <iostream>
using namespace std;;

int main(){

int num;
cout << "Enter a odd number:";
cin >> num;
for(int i=1;i<=num;i++){

    int star, blank;

    if(i <= num/2+1){
        star = 2*i-1;
    }
    else{
        star = 2*(num-i)+1;
    }

    blank = (num-star)/2;

    for(int j=0;j<blank;j++){
        cout << " ";
    }

    for(int j=0;j<star;j++){
        cout << "*";
    }
cout << endl;

}



return 0;
}
