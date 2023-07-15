#include <iostream>
using namespace std;

//overloading = writing different methods using
//the same name by changing the parameters of a method.

class human{
    private:
        int height;
        int weight;
    public:
        void setHeight(int x){
            height = x;
        }
        void setHeight(int x, int y){
            height = x;
            weight = y;
        }
        void setHeight(float x){
            height = x*100;
        }
        int getHeight(){
            return height;
        }

};

int main(){

human jesse;
jesse.setHeight(180);
cout << jesse.getHeight() << endl;

jesse.setHeight((float)1.85);
cout << jesse.getHeight();


return 0;
}
