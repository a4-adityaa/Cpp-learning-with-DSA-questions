// For compile time polymosrphism genrerally constructor overloading used;

#include<iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int roll_no;

    person(){
        cout<<"Default constructor called"<<endl;
    }
    person(string name, int roll_no){
        this->name=name;
        this->roll_no=roll_no;
        cout<<"Parameterized constructor called"<<endl;
    }
};

int main(){
    person p1; // default constructor called
    person p2("Aditya", 13250); // parameterized constructor called

    cout<<"Name: "<<p2.name<<endl;
    cout<<"Roll No: "<<p2.roll_no<<endl;

    return 0;
}