// Abstraction mean hiding unnecessary things and showing only imp things in code;

#include<iostream>
#include<string>
using namespace std;

class shape {
    virtual void draw()=0; // pure virtual function;
};

class circle : public shape{
    public:
    void draw(){
        cout<<"Drawing circle"<<endl;
    }
};

int main(){
    circle c1;
    c1.draw();

    return 0;
}