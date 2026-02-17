#include<iostream>
#include<string>
using namespace std;

class person{
 public:
 string name;
 int age;

 person(string name, int age){
    this->name = name;
    this->age = age;
    cout << "person constructor called" << endl;
 }

//  person(){
//   cout << "person constructor called"<< endl;
//  }
//  ~person(){
//     cout << "person destructor called" << endl;
//  }
};

class student : public person{
    public:
    int rollNo;
    student(string name, int age, int rollNo):person( name, age){
        this->rollNo = rollNo;
        cout << "student constructor called" << endl;
    }

    void display(){
        cout<< "Name: " << name << endl;
        cout<< "Age: " << age << endl;
        cout<< "Roll number: " << rollNo << endl;
    }
    // student(){
    //     cout << "student constructor called" << endl;
    // }
    // ~student(){
    //     cout << "student destructor called" << endl;
    
};


int main(){
    student s1("Aditya", 19, 13250);
    // s1.name = "Aditya";
    // s1.age = 19;
    // s1.rollNo = 13250;

    s1.display();

    return 0;
}