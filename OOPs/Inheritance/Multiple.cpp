// Multiple inheritance;

#include <iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    int rollNo;
};

class teacher{
    public:
    double salary;
    string subject;
};

class TA : public student, public teacher {
    public:

    void Display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Subject: "<<subject<<endl;
    }
};

int main(){
    TA t1;
    t1.name = "Aditya";
    t1.rollNo = 13250;
    t1.salary = 50000;
    t1.subject = "DSA";

    t1.Display();

    return 0;
}