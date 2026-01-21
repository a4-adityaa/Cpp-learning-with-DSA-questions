#include<iostream>
using namespace std;
 int main() {
    int n;
    bool isPrime = true;

    cout << "enter the value of n: ";
    cin>> n;

    //for(int i=2; i<=n-1; i++) {
    for (int i=2; i*i<n; i++) {
    if(n%i==0)
        isPrime = false;
        break;
    }
    if(isPrime== true) {
        cout<< "it's a prime number\n" ;
    } else {
        cout << "it's not a prime number\n" ;
    }
    return 0;
    } 