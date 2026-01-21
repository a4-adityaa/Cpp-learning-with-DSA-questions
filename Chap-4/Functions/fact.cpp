#include<iostream>
using namespace std;

int factorialOf( int n) {
    int fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }return fact;
}

int main() {
    int n;
    cout<< "enter the value of n: ";
    cin>> n;

    cout << "the factorial of the no. is: " << factorialOf(n) << endl;
    return 0;
}