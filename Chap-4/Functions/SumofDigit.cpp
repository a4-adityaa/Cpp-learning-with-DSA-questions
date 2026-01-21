// to find sum of digits
#include<iostream>
using namespace std;

int sumofDigit(int num) {
    int lastdigit, sum = 0;
    while(num>0) {
        lastdigit=num%10;
        num=num/10;

        sum+=lastdigit;
    }
    return sum;
}

int main() {
    int num;
    cout<< "enter the number: ";
    cin>> num;

    cout<<"the sum of numbers is: " << sumofDigit(num) << endl;
    return 0;
}