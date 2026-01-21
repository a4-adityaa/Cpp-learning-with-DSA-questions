#include<iostream>
using namespace std;

int main() {
    int n;
    cout<< "enter the value of n: ";
    cin >> n;
    int num = 0;


for(int i=0; i<n; i++) {
    for( int j=0; j<n; j++) {
    cout << num << " ";
    num++;
    }
    cout << endl;
}return 0;
}