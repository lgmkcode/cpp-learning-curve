#include <iostream>
using namespace std;


class food{ // class
    public: // access modifier (public, private -> just the class it's in)
        int calorie;
        int cost;
        int gram;
// If we want instead of using "public:" 
// public int calorie;
// public int cost;
// public int gram;
// private int salary;
        void warm(int time){
            if(time<300){
                calorie += time;
            }
            else{
                calorie = 0;
            }
        }
};


class human{ // class
    public:
        int height;
        float weight;
        int age;

        void eat(food x){
            weight += x.calorie/(float)7000;
        }
};


int main(){

    human jesse; // object
    jesse.height = 173;
    jesse.weight = 70;
    jesse.age = 43;

    food apple; // object
    apple.calorie = 104;
    apple.cost = 2;
    apple.gram = 200;

    cout << "weight:" << jesse.weight << endl;
    jesse.eat(apple);
    cout << "weight:" << jesse.weight << endl;

    apple.warm(400);
    jesse.eat(apple);
    cout << "weight:" << jesse.weight << endl;

    apple.warm(100);
    jesse.eat(apple);
    cout << "weight:" << jesse.weight << endl;


return 0;
}

