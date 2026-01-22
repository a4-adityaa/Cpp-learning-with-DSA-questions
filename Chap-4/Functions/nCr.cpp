#include<iostream>
using namespace std;

int factOfnum(int n){
    int fact=1;

    for(int i=1; i<=n; i++){
    fact=fact*i;
    }return fact;
}

int nCr(int n, int r){

    int fact_n = factOfnum(n);
    int fact_r = factOfnum(r);
    int fact_nmr = factOfnum(n-r);

    return fact_n/(fact_r*fact_nmr);
}


int main() {
    int n,r;
    cout<< "enter the value of n & r: ";
    cin>> n>> r; 
    
    cout<< "the nCr of the given numbers is: " << nCr(n,r) << endl;

    return 0;
}