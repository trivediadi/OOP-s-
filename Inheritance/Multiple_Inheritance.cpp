#include<iostream>
using namespace std;
// this is example of Multiple inheritance
// where class inherite properties from different classes
class Student{
    public:
    string name;
    int rollno;

};
class Teacher{
public:
   string subject;
   int salary;
};
class TA:public Student,public Teacher{
    public:
    void getinfo(){
        cout<<name<<endl;
        cout<<rollno<<endl;
        cout<<salary;

    }
};
int main(){
    TA t1;
    t1.name="RAju";
    t1.rollno=21;
    t1.salary=23000;
    t1.getinfo();
}