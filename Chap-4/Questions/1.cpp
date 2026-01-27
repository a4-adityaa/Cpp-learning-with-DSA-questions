#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"Not Prime";
            return false;
        }
    }
    cout<<"Prime";
    return true;
}

int main(){
    int n;
    cout<< "enter the value of n: ";
    cin>> n;

    isPrime(n);
    return 0;
}
