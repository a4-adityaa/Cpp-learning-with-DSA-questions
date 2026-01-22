#include<iostream>
using namespace std;

int main() {

  //  int marks[5]= {99, 95,75, 68,47};
    int size=5;
    int marks[5];

    cout<<"enter the elements of array: ";

    for(int i=0; i<size; i++){
        cin>>marks[i];

    }

    for( int i=0; i<size; i++){
        cout<<marks[i] << endl;

    }return 0;
}