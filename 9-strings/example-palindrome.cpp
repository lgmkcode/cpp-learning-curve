#include <iostream>
using namespace std;

int main(){

    cout << "enter a word:";

    char c[100];
    cin >> c;
    char *p,*q;
    p=c;
    q=c;

    while(*q!='\0'){
        q++;
    }
    q--;

    bool palindrome=true;

    while(q>p){
        if(*p!=*q){
            palindrome=false;
        }
        p++;
        q--;
    }
    if(palindrome){
        cout << "the entered word is a palindrome" << endl;
    }
    else{
        cout << "the entered word is not a palindrome" << endl;
    }
}

