#include<iostream>
using namespace std;

int main() {
    int percentage;
    cout << "enter your percentage: ";
    cin >> percentage;

    cout<< (percentage<=30 ? "lowBattery" : "still charged");
return 0;
}