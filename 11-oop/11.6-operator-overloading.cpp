#include <iostream>
using namespace std;

class rectangle{
    private:
        int width;
        int length;
    public:
	void setLength(int length){
            if(length<0){
                this->length = 0;  //"length" inside "this->length" class.
            }
            else{
                this->length = length; //"The "length" inside the "length" parameter."
            }
        }
        void setWidth(int width){
            this->width = width;
        }
        int getLength() const {return length;}
        int getWidth() const {return width;}

        rectangle operator+(const rectangle& r){ // operator overloading
            rectangle rectangle1;
            rectangle1.width = this->width + r.width;
            rectangle1.length = this->length + r.length;
        return rectangle1;
        }

};

int main(){

    rectangle rect;
    rect.setLength(186);
    rect.setWidth(50);

    rectangle rect1;
    rect1.setLength(184);
    rect1.setWidth(30);

    rectangle sum = rect + rect1;
    cout << "Length:" << sum.getLength() << " Width: " <<sum.getWidth();

return 0;
}
