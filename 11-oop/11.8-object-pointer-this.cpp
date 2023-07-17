#include <iostream>
using namespace std;

class human{
    public:
        int height;
        int weight;

        void eat(int weight){
            this->weight = this->weight + weight;
        }
};

int main(){
    human jesse;
    jesse.height = 186;

    human *p;
    p = &jesse; // object pointer

    cout << jesse.height << endl;
    cout << p->height << endl; // -> is used to access the element of the object pointer.

    p->weight = 84;
    p->eat(6);
    cout << p->weight << endl;
return 0;
}

