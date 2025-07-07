#include<iostream>
using namespace std;

class Teacher{
private:
     double salary;
public:
// Every time when object is created the constructor is initalized automatically
     Teacher(){ // Constructor use the same name as class without and return type
        cout<<"Hi This is constructor"<<endl; // This is a constructor 
        dept="English";
     }
     // Constructor is used to set any data before and method call 
     string name;
     string dept;
     string subject;

     void changeDept(string Dept){
        dept=Dept;
     }
};
//There are three types of constructor
// 1.Non parameterized  2.Parameterized  3.Copy Constructor
// Paramerterized
class Teacher1{
    private:
    double salary;
    public:
    Teacher1(string n,string d,string sub){
        name=n;
        dept=d;
        subject=sub;
    }
    //copy constructor
    Teacher1(Teacher1 &orgObj){
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

int main(){
  //  Teacher t1; // Constructor will be called first
   // t1.name="Mrjohnes";
    // t1.dept="Computer Science";
    // t1.changeDept("Electronics");
   // cout<<t1.dept;
   Teacher1 t1("Mrjohnes","Science","Physics");
   t1.print();
   cout<<endl;
 // Teacher1 t2(t1);  default copy constructor
    Teacher1 t2(t1);
   t2.print();
}