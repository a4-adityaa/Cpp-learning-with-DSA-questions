// to print all prime number from 1 to n;

#include<iostream>
using namespace std;

int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n; 
    cout<<"enter the value of n: ";
    cin>> n;
    cout<<"all prime number till n is: ";

    for( int i=2; i<n; i++){
    if(prime(i)==1)
    cout<< i << " ";
    }return 0;
}