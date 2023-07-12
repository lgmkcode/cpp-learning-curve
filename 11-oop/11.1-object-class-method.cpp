#include <iostream>
using namespace std;

class human{ // class
    public:
        int height;
        int weight;
        int age;

        int eat(){
            cout << "after eating" << endl;
            return weight +1;
        }

};

int main(){

    human jesse; // object
    jesse.height = 173;
    jesse.weight = 70;
    jesse.age = 43;

    cout <<"height:" << jesse.height << " weight:" << jesse.weight << " age:" << jesse.age << endl;

    jesse.eat();
    cout <<"height:" << jesse.height << " weight:" << jesse.weight << " age:" << jesse.age << endl;

return 0;
}

