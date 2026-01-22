#include<iostream>
using namespace std;

int main() {
    int marks[5] = {90,80,70,60,50};

    cout<< marks[4] << endl;
    cout<< marks[0] << endl;

    marks[3]= 70;
    cout<< marks[3] << endl;
    return 0;
}