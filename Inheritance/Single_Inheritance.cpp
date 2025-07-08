#include<iostream>
using namespace std;
//This is example of Single Inheritance
//base class or parent class
class Person{
    public:
    string name;
    int age;
    Person(){
       cout<<"Parent constructor"<<endl;
    }
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }

};
// In this case we are inheriting our base class or parent class
class Student:public Person {
    public:
    int rollno;
    Student(){
        cout<<"child constructor"<<endl;
    }
    // in case of parmeterized constructor
    Student(string name,int age,int rollno): Person(name,age){
        this->rollno=rollno;
    }
    void get_info(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno:"<<rollno<<endl;
    }
};
int main(){
    // Student s1;
    // s1.name="Rahi";
    // s1.age=14;
    // s1.rollno=20;
    Student s1("Raju",23,10); // To handle parameterized constructor
    s1.get_info();

}