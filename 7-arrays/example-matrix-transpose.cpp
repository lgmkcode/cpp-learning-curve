#include <iostream>
using namespace std;

int main(){

int n,m;
cout << "enter number of lines:";
cin >>n;
cout << "enter number of columns:";
cin >>m;
int a[n][m];
int b[m][n];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout << "enter number of a[" << i << "][" << j << "] =";
        cin >> a[i][j];
    }
}

int c[n*m];
int d =0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        c[d]  = a[i][j];
        d++;
    }
}

d=0;
for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
        b[i][j] = c[d];
        d++;
    }
}
cout
cout << "transpose of the entered matrix" << endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout << b[i][j] << " ";
    }
cout << endl;
}

return 0;
}
