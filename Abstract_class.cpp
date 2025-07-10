#include<iostream>
using namespace std;
//Abstract classes cannot be used to make object or instances
class Shape{ // If there is Pure virtual function then it automatically become abstract class
    virtual void draw()=0; // Pure virtual functiom
};
class Circle: public Shape{
    public:
    void draw(){
        cout<<"drawing circle";
    }
};
int main(){
    Circle c1;
    c1.draw();
}
