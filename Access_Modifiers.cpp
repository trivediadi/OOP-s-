#include<iostream>
#include<string>
using namespace std;
// This is also the Example of Encapusation
// Encapusation is wrapping of data & member functions in class
class Teacher{
private:
    double salary; // This is private modifier which is used when we do not want are data used outside of class

public:  // This is public modifier can be used in outside and inside of the class
    string name;// data in our class
    string dept;
    string subject;

    void changeDept(string dep) {// This is our method in class
        dept = dep;
    }
   // This also known as Setter(set value in private data)
    void changeSalary(double s) {// To use private modifier we need to use method
        salary = s;
    }
    // This is also known as Getter(To get the value of the setter)
    double getSalary() {
        return salary;  // method to print salary
    }
};
int main(){
    Teacher obj1; // creating object using class 
    obj1.name="MrJohnes";  // Using dot operator to access data
    obj1.dept="Science";
    obj1.subject="Chemistry";

    cout<<obj1.name<<endl; 
    obj1.changeDept("Maths"); //Calling method of the class
    cout<<obj1.dept<<endl;
    obj1.changeSalary(20000); // usign function to access private data
    cout<<obj1.getSalary();

}