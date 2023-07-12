#include <iostream>
using namespace std;

class rectangle{
    private:
        int width;
        int height;
    public:
        int area();
        int perimeter();

        int getWidth(){
            return width;
        }

        void setWidth(int w){
            if(w >= 0){
                width = w;
            }
            else{
                width = 0;
            }
        }

        int getHeight(){
            return height;
        }

        void setHeight(int h){ 
            if(h < 0){ 
                height = 0;
            }
            else{
                height = h;
            }
        }
};

int rectangle::area(){
    return width * height;
}

int rectangle::perimeter(){
    return 2*(width + height);
}

int main(){
    rectangle r1;
    r1.setWidth(150);
    r1.setHeight(50);
    cout << "area:" << r1.area() << " perimeter:" << r1.perimeter() << endl;
    cout << "width:" << r1.getWidth() << " height:" << r1.getHeight() << endl;
return 0;
}

