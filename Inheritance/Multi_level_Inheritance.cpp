#include<iostream>
using namespace std;
// This is example of multi level inheritance
class Person{ // parent class
    public:
    string name;
    int age;
};
class Student : public Person{ // Parent class
    public: 
    int rollno;
};
class GradStudent:public Student{ // Child class
public:
string reseacharea;
};
int main(){
    GradStudent g1;
    g1.name="Ramo";
    g1.age=21;
    g1.rollno=32;
    g1.reseacharea="AI/ML";
    cout<<g1.name<<endl;
    cout<<g1.reseacharea;
}