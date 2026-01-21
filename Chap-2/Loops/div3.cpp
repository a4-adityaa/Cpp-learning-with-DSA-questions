// sum of n number which are divisible br 3.

#include<iostream>
using namespace std;
int main() {
    int n;
    int sum=0;
    cout << "enter the value of n: " ;
    cin >> n;

    for( int i=1;  i<=n; i++) {
        if(i%3 == 0)
        sum += i;
    }
    cout <<" the sum is :" << sum << endl;
    return 0;
}