#include<iostream>
using namespace std;

int binTodec(int binNum){
    int ans = 0, pow =1;

    while(binNum>0){
    int rem= binNum % 10;
    ans += (rem * pow);

    binNum/= 10;
    pow *=2;
    }
    return ans;
}
// printing
int main() {
    int binNum;
    cout<<"enter the binary number: ";
    cin>> binNum;

    cout<<"decimal number is: " << binTodec(binNum) << endl;
    return 0;
}