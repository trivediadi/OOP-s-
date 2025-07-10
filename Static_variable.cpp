#include<iostream>
using namespace std;

void A(){
    static int x=0;
    cout<<"x: "<<x<<endl;
    x++;
};

int main(){
    A(); 
    A();
    A(); // due to static keyword the x will inialized only once that why increament will happen
    return 0;
}