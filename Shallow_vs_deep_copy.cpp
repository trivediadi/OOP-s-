#include<iostream>
using namespace std;

class Teacher{
    private:
    double salary;
    public:
    Teacher(string name,string dept,string subject){
        this->name=name;
        this->dept=dept;
        this->subject=subject;
    }
    //copy constructor and this is also a shallow copy
    Teacher(Teacher &orgObj){
        cout<<"this is custom copy constructor"<<endl;
        this->name=orgObj.name;
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
    }
    string name;
    string dept;
    string subject;
    void print(){
        cout<<name<<endl;
        cout<<dept<<endl;
        cout<<subject<<endl;
    }
};
// Problem with shallow copy when me use dynamic memory allocation
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
    this->cgpaPtr=obj.cgpaPtr;
 }
 void get_info(){
    cout<<"Name: "<<name<<endl;
    cout<<"Cgpa: "<<*cgpaPtr<<endl;
 }
};
class Student1{
public:
string name;
double* cgpaPtr;
 Student1(string name,double cgpa){
    this->name=name;
    cgpaPtr = new double;
    *cgpaPtr=cgpa;
 }
 // copy constructor using dynamic memory allocation
 Student1(Student1 &obj){
    this->name=obj.name;
    cgpaPtr=new double; // deep copy (allocating new loc to our cgpaptr)
    *cgpaPtr= *obj.cgpaPtr;
 }
 void get_info(){
    cout<<"Name: "<<name<<endl;
    cout<<"Cgpa: "<<*cgpaPtr<<endl;
 }
};
int main(){
 //   Teacher t1("Mrjohnes","Science","Physics");
 //   Teacher t2(t1);
  //  t2.print();
//   Student s1("Rahul",8.9);
//   Student s2(s1);
//   *(s2.cgpaPtr)=9.2;
//   s1.get_info(); 
//   s2.get_info(); // due to shallow copy the change in cgpa is on both the obj due to same address issue this can be solved by deep copy
//   // using deep copy constructor
  Student1 S1("Rahul",8.9);
  Student1 S2(S1);
  
  *(S2.cgpaPtr)=9.2;
  S1.get_info();
 S2.name="Neha"; 
  S2.get_info();
}