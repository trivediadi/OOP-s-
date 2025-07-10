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
  
    Teacher(string name,int age){
        this->name=name;
        this->age=age;
    }
    //This is Function Overloading
    //When function name is same but params or no.of params are different 
    void getinfo(){
        cout<<name<<endl;
    }
    int getinfo(int age){
        this->age=age;
        return age;
    }
};
int main(){
    Teacher t2("RAhi",23); 
    t2.getinfo(); 
    int r=t2.getinfo(25);
    cout<<r<<endl;
}
