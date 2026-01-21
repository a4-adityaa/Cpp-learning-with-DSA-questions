#include<iostream>
using namespace std;

int main() {
    int Age;
    cout << "enter your age: ";
    cin >> Age;

    if (Age>=18) {
        cout << "Eligible to Vote" << endl;
    } else {
        cout << "u're not eligible to vote" << endl;
    }
    return 0;
}