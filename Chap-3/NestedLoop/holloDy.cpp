
// hollow diamond pattern;

#include<iostream>
using namespace std;

int main() {
    int n;;
    cout<< "enter the value of n: " ;
    cin >> n;


    // top part
    for( int i=0; i<n; i++) {
        // for spaces
        for( int j=0; j<n-i-1; j++) {
            cout<< " " ;
        } 
        cout<< "*";
        
        if( i !=0) {
            for(int j=0; j<2*i-1; j++) {
                cout<< " ";
            }
            cout<< "*";
        }
        cout<< endl;
    } return 0;
}
