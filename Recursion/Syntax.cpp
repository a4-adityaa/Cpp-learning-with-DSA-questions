#include<iostream>
using namespace std;

void printNum(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<" ";
    printNum(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    printNum(n);
    
    return 0;
}