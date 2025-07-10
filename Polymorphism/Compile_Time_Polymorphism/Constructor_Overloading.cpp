#include<iostream>
using namespace std;
/* Polymorphism is the ability of objects to take on different forms 
   or behave in different ways depending on the context in which they are used*/
//There two types of Polymorpphism 
//1.Compile Time Polymorpphism 2.Run TIme Polymorpphism 
//Comiple Time Polymorpphism example are Constructor overloading,Function,Operator overloading
class Teacher{
    public:
    string name;
    int  age;
    //Multiple Constructor is in single class is known as Constructor overloading 
    Teacher(){
        cout<<"this is a Non-parameterized constructor"<<endl;
    }
    Teacher(string name,int age){
        cout<<"this is Parameterized constructor"<<endl;
        this->name=name;
        this->age=age;
    }
};
int main(){
    Teacher t1; // using non parameterized constructor 
    Teacher t2("RAhi",23); // using Parmeterized constructor from same class

}
