// factorial of a number n 

#include<iostream>
using namespace std;
int main() {
    int n;
    int fact=1;
    cout << "enter the value of n: " ;
    cin >> n;

    for( int i=1;  i<=n; i++) {
        fact *= i;
    }
    cout <<" the factorial of the number is :" << fact << endl;
    return 0;
}