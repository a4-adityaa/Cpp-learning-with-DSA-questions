// Function Overriding is type of run time polymosrphsim;

#include<iostream>
#include<string>
using namespace std;

class Parent{
    public:
    void display(){
        cout<<"This is parent class"<<endl;
    }
};

class Child : public Parent{
    public:
    void display(){
        cout<<"This is child class"<<endl;
    }
};

int main(){
    Child c1;
    //Parent p1;
    
    c1.display();
    //p1.display();

    return 0;
}