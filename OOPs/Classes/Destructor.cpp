#include<iostream>
#include<string>
using namespace std;

class student{
 public:

 string name;
 string course;
 double roll_no;
    
    student(double roll_no){
        this->roll_no = roll_no;
    }
    void Display(){
       cout<< "name: " << name << endl;
       cout<< "course: " << course << endl;
       cout<< "roll_no: " << roll_no << endl;
    }
    // desctructor;
    ~student(){
        cout<<"Destructor called"<<endl;
    }
};

int main(){

    student s1(13250);
    s1.name = "Aditya";
    s1.course = "BCA";
    
    s1.Display();
}