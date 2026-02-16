#include<iostream>
#include<string>
using namespace std;

class Teacher{
  private:
  double salary;

  public:
  string name;
  string dept;
  string subject;

  void changeDept(string newDept){
    dept = newDept;
  }

  int assignSalary(int s){
   salary=s;
  }  
  int getSalary(){
    return salary;
  }
};

int main(){
    Teacher t1;

    t1.name = "Aditya";
    t1.dept = "CSE";
    t1.subject= "C++";
    t1.assignSalary(50000);

    cout<< t1.name <<endl;
    cout<< t1.getSalary() <<endl;

    return 0;
}