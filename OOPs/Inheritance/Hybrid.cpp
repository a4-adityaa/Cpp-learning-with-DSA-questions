// Hybrid Inheritance;

#include <iostream>
#include<string>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

// virtual inheritance to protect duplication of data bcoz two copies of name and age will be inherited //

class Student : virtual public Person{ 
    public:
    int rollNo;
};

class Teacher : virtual public Person{
    public:
    double salary;
};

class TA : public Student, public Teacher{
    public:
    string subject;
};

int main(){
    TA t1;
    t1.name = "Aditya";
    t1.age = 19;
    t1.rollNo = 13250;
    t1.salary = 50000;
    t1.subject = "OOPs";

    cout<<"Name: "<<t1.name<<endl;
    cout<<"Age: "<<t1.age<<endl;
    cout<<"Roll No: "<<t1.rollNo<<endl;
    cout<<"Salary: "<<t1.salary<<endl;
    cout<<"Subject: "<<t1.subject<<endl;

    return 0;
}