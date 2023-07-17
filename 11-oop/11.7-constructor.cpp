#include <iostream>
using namespace std;

class human{
    private:
        int height; //encapsulation
        int weight;
    public:
        human(){ // constructor
            height = 10;
            weight = 1;
        }
        human(int h){ // constructor + overloading
            height = h;
        }
        human(int h, int w){ // constructor + overloading
            height = h;
            weight = w;
        }

        void setHeight(int h){ // setter
            height = h;
        }
        int getHeight(){ // getter
            return height;
        }
};

int main(){
    human mine;
    human jesse(170,65);
    cout << "mine height:" << mine.getHeight() << " jesse height:" << jesse.getHeight();
return 0;
}
