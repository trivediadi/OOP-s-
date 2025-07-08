#include<iostream>
using namespace std;

class Student{
public:
string name;
double* cgpaPtr;
 Student(string name,double cgpa){
    this->name=name;
    cgpaPtr = new double;
    *cgpaPtr=cgpa;
 }
 // copy constructor using dynamic memory allocation
 Student(Student &obj){
    this->name=obj.name;
    cgpaPtr=new double; // deep copy (allocating new loc to our cgpaptr)
    *cgpaPtr= *obj.cgpaPtr;
 }
 //destructor
 ~Student(){
    cout<<"hi i delete everything";
    // To free dynamic memory we need to use delete keyword
    delete cgpaPtr;
 }
 void get_info(){
    cout<<"Name: "<<name<<endl;
    cout<<"Cgpa: "<<*cgpaPtr<<endl;
 }
};
int main(){
 Student s1("rahul Kumar",9.2);
 s1.get_info();

}