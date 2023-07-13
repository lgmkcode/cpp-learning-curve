#include <iostream>
using namespace std;

class human{
    protected: // own class and inheriting class can access. access modifier.
        int height;
        int age;
        float weight;

    public: // all classes can access.
        void eat(){
            weight++;
        }

    private: // can only access from the class it is in.
};



class worker : public human{  // ":" meaning of "is a". worker is a human.
    public:
        int salary;
        void raise(int x){
            salary += x;
            weight = 61;
        }
        void printWeight(){
            cout << "weight:" << weight << endl;
        }
};

int main(){

    worker mine;
    mine.salary = 9000;
//  mine.height = 170; //encapsulation
//  mine.weight = 60;
    cout << "salary:" << mine.salary << endl;
    mine.printWeight();
    mine.raise(2000);
    mine.eat();
    cout << "salary:" << mine.salary << endl;
    mine.printWeight();

return 0;
}
