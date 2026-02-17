// multi-level inheritance

#include <iostream>
#include<string>
using namespace std;

class person{
    public:
    string name;
    int age;
};

class student : public person{
    public: 
    int rollNo;
};

class gradStudent : public student{
    public:

    string researchArea;

    void details(){
        cout<< "Name: " << name << endl;
        cout<< "Age: " << age << endl;
        cout<< "Roll number: " << rollNo << endl;
        cout<< "Research Area: " << researchArea << endl;
    }
};

int main(){
    gradStudent g1;
    g1.name = "Aditya";
    g1.age = 19;
    g1.rollNo = 13250;
    g1.researchArea = "Machine Learning";

    g1.details();

    return 0;
} 