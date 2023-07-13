#include <iostream>
using namespace std;

void pr(int x){

    int count = 0, count2 = 0;
    if (x>=0){

        for(int n=2;count2 != x; n++){

            for(int i=1; i<=n;i++){

                if(n%i == 0){
                    count +=1;
                }
            }

            if(count == 2){
                cout << n << endl;
                count2 += 1;
            }
            count = 0;
        }
    }

    else{
        cout << "incorrect entry!";
    }

}

int main(){
int num;
cout << "enter a number:";
cin >> num;
pr(num);

return 0;
}
