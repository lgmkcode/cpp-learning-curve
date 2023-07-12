#include <iostream>
using namespace std;

class rectangle{
    public:
        int width;
        int height;

        void area(){
            cout << width*height << endl;
        }

        void perimeter(){
            cout <<  2*(width+height) << endl;;
        }

};


int main(){


rectangle ex1;
ex1.width = 50;
ex1.height = 100;

rectangle ex2;
ex2.width = 150;
ex2.height = 200;

ex1.area();
ex1.perimeter();
ex2.area();
ex2.perimeter();

return 0;
}


