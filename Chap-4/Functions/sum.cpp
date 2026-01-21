#include<iostream>
using namespace std;

// sum of two num
int sum(int a, int b) {
int s = a+b;
return s;
}

// to find MaxOfTwo numbers

float maxofTwo(float a, float b){
if(a>b) {
    return a;
    } else {
    return b;
    }   
}



// int main() {
//     int a,b;
//     cout<< "enter the numbers: " ;
//     cin>> a>> b; 
// cout<< " the sum of numbers is: "<< sum(a,b)<< endl;
// return 0;
// }


int main() {
int a,b;
cout<< "enter the two numbers: ";
cin >> a>> b;

cout<< "the maximum of two numbers is: " << maxofTwo(a,b) << endl;
cout<< "the sum of two numbers is : " << sum(a,b) << endl;
return 0;
}