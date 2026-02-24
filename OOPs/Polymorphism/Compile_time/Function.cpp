// compile time polymorphism using function overloading;

#include<iostream>
#include<string>
using namespace std;

class print {
    public:
    void display(int num){
        cout<<"Integer: "<<num<<endl;
    }
    void display(char ch){
        cout<<"Character: "<<ch<<endl;
    }
};

int main(){
    print p1;
    p1.display(5);
    p1.display('A');
    return 0;
}