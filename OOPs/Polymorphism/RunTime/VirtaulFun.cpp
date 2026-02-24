// virtual function;

#include <iostream>
#include<string>
using namespace std;

class parent{
    public:
    void show(){
        cout<<"parent class"<<endl;
    }
    virtual void display(){
        cout<<"this is display function of parent class"<<endl;
    }
};

class child:public parent{
    public:
    void show(){
        cout<<"child class"<<endl;
    }
    void display(){
        cout<<"this is display function of child class"<<endl;
    }
    
};

int main(){
    child c1;
    c1.display();

    return 0;
}