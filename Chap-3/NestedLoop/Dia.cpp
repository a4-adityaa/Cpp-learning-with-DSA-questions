#include<iostream>
using namespace std;

int main() {
    int lines;
    cout<< "enter the no of lines: ";
    cin>> lines;

    for(int i=0; i<lines; i++) {

// spaces
    for( int j=lines-i; j>0; j--) {
    cout << " ";
    }
    // stars
    for( int j=0; j<=i; j++){
        cout<< "* ";
    }
    cout<< endl;
    }
    
    for( int i=0; i<lines; i++){

// spaces
    for( int j=0; j<=i; j++) {
        cout << " ";
    }
// stars
    for( int j=lines-i; j>0; j--) {
        cout<< "* ";
    }
    cout<< endl;
    }    
    return 0;
}
