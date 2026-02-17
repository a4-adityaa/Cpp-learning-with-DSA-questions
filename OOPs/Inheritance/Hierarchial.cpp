// hierarchial inheritance;

#include <iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;
};

class student:public person{
    public:
    int roll_no;
};

class teacher:public person{
    public:
    string subject;
};

int main(){
    student s1;
    s1.name="Aditya";

    teacher t1;
    t1.age = 19;

    cout<< "name: " << s1.name << endl;
    cout<< "age: " << t1.age << endl;
}