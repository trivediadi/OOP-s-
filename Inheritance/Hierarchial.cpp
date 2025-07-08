#include<iostream>
using namespace std;
// This is example of hierarchial inheritance
// Where single parent class can be inherit by multile child class
class Person{
    public:
    string name;
    int age;
};
class Student:public Person{
    public:
    int rollno;
    void getinfo(){
        cout<<name<<endl;
        cout<<rollno<<endl;
        cout<<age<<endl;
    }
    
};
class Teacher:public Person{
    public:
    string subject;
    void getinfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<subject<<endl;

    }
};
int main(){
    Teacher t1;
    t1.name="Raju";
    t1.age=21;
    t1.subject="maths";
    Student s1;
    s1.age=12;
    s1.name="kalo";
    s1.rollno=211;
    t1.getinfo();
    s1.getinfo();

}