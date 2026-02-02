// to find x^n using binary exponential;

#include<iostream>
using namespace std;

int binaryexp(int x, int n){
    
    int binaryform=n;
    int ans=1;
    if(n< 0){
        x = 1/x;
        binaryform= -binaryform;
    }

    while(binaryform > 0){
        if(binaryform % 2== 1){
            ans *=x;
        }
        x *= x;
        binaryform /= 2;
    }
    return ans;
}

int main(){
    int n, x;
    cout<<"Enter the number and power: ";
    cin>>x >>n;
    cout<< "the x^n is: " <<binaryexp(x,n);
}