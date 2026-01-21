#include<iostream>
using namespace std;

int main() {
    int marks;
    cout<< "enter your marks: ";
    cin>> marks;

    if (marks>=85) {
        cout << "First Division" << endl;
    } else if (marks>=75) {
        cout << "Second Division" << endl;
    } else if(marks>=60) {
        cout << "Third Division" << endl;
    } else {
        cout << "Fail" << endl;
    }
    return 0;
    }