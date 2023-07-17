#include <iostream>
using namespace std;

class shape{
    protected:
        int width;
        int length;
    public:
        shape(int a, int b){ // constructor (should be in public)
            width = a;
            length = b;
        }

        void setWidth(int width){ //setter
            this->width = width;
        }
        void setLength(int length){ //setter
            this->length = length;
        }
        int getWidth(){ //getter
            return width;
        }
        int getLength(){ //getter
            return length;
        }

        virtual int area(){
            cout << "[area from shape class]";
            return 0;
        }

};


class rectangle:public shape{  //inheritance
    public:
        rectangle(int a, int b):shape(a,b){} //super constructor

        int area(){ //override
            cout << "[area from rectangle class]";
            return width*length;
        }
};


class triangle:public shape{ //inheritance
    public:
        triangle(int a, int b):shape(a,b){} //supper constructor

        int area(){ //override
            cout << "[area from triangle class]";
            return width*length/2;
        }
};


int main(){

    triangle t(4,5);
    rectangle r(4,5);

    cout << "area of triangle:" << t.area() << " area of rectangle:" << r.area() << endl;

    shape *p;
    p = &t; //upcaste
    cout << "area of shape(triangle)" << p->area() << endl;
    // If we didn't write "virtual", the "area" inside the shape would work.

    p = &r; //upcaste
    cout << "area of shape(rectangle)" << p->area() << endl;
    // If we didn't write "virtual", the "area" inside the shape would work.

    shape s(40,50);
    cout << "area of shape object" << s.area() << endl;
return 0;
}
