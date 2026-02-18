// static data in class

#include<iostream>
#include<string>
using namespace std;

class A {
    static int count;
public:
    A(){
        cout<< "constructor called" << endl;
    }
    ~A(){
        cout<< "Destructor called" << endl;
    }
};

int main(){
    if(true){
        A obj;
    }
    cout<< "end of main function" << endl;
}