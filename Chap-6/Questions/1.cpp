// find smallest number in an array;

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter the size: ";
    cin>> size;

    cout<<"enter the elements: ";

    int num[size];

    for(int i=0; i<size; i++){
    cin>>num[i];
    }
    
    int smallest= INT_MAX;
    int smallestIndex=0;

    for(int i=0; i<size; i++){
        if(num[i]<smallest){
            smallest=num[i];
        }
        if(num[i]<num[smallestIndex]){
            smallestIndex=i;
        }
    } cout<< "smallest number is: " << smallest << endl;
    cout<< "and the index is: " << smallestIndex;
    return 0;
}