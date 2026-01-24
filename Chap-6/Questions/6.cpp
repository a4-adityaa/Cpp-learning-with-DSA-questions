// program to print duplicate element;

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size: ";
    cin>> size;

    int arr[size];
    cout<< "enter element of an array: ";
    for(int i=0; i<size; i++){
        cin>> arr[i];
    }

    bool repele[size]= {false};
    

    cout<<" deplicate elelments are: ";
    for(int i=0; i<size; i++){
        if(repele[i]){
            continue;
        }
        int count=1;
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
                repele[j]= true;
            }
        } 
        if(count>1){
        cout<< arr[i] << " ";
        }
    } cout<< endl;
    return 0;
}