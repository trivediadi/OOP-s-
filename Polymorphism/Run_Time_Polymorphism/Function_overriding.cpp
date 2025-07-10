#include<iostream>
using namespace std;
// When we have same function in parent and child class
// Then it is known as function overriding
// And this case ,parent case will overridden by child class
class Parent{
    public:
    void show(){
        cout<<"Parent Class";
    }
};
class Child :public Parent{
    public:
    void show(){
        cout<<"child class";
    }
};
int main(){
    Child c1;
    c1.show();
}