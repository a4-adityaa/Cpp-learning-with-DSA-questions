// use of constructor

#include<iostream>
#include<string>
using namespace std;

class Teacher{
  public:
  string name;
  string dept;
  string subject;
  double salary;

  // non-parameterized constructor
  Teacher(){
    dept= "CSE";
  }
  // parameterized constructor
  Teacher(double s){
    salary = s;
  }
  // this operator
  Teacher(string subject, string name){
    this->subject = subject;
    this->name = name;
  }

  // copy constructor
  Teacher(Teacher &OrgObj){
    cout<<"Copy constructor called"<<endl;
    this->subject = OrgObj.subject;
    this->name = OrgObj.name;
  }
};

int main(){
    Teacher t1;  // Non-parameterized constructor
    Teacher t2(50000);  // Parameterized constructor
    Teacher t3("Maths","Aditya");
    Teacher t4(t3); // defalut copy cunstructor

    cout<< "t1 dept: " << t1.dept << endl;
    cout<< "t2 salary: " << t2.salary << endl;
    // cout<< "subject=" <<t3.subject << " " << "name=" << t3.name << endl;
    cout<< "subject=" <<t4.subject << " " << "name=" << t4.name << endl;

    return 0;
}