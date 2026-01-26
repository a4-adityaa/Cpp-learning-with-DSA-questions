#include<iostream>
using namespace std;

int main(){

    int arrA[]={1,2,3,4,5};
    int size=5;

    for( int st=0; st<size; st++){
        for( int end=st; end<size; end++){
            for( int i=st; i<=end; i++) {
                cout<< arrA[i];
            }
            cout<<" ";
        }
        cout<< endl;
    }
    return 0;
}