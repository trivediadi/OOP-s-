#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"Parent Class";
    }
    virtual void hello(){
        cout<<"hello from par";
    }
};
class Child :public Parent{
    public:
    void show(){
        cout<<"child class";
    }
    void hello(){
        cout<<"hello from child";
    }
};
int main(){
    Child c1;
    c1.hello();
}