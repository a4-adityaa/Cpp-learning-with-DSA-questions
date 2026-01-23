// to find second mininum number in aaray

#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"Enter the size of array : ";
    cin>> size;

    int arr[size];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int minNum= INT_MAX;
    int Secmin= INT_MAX;

    for(int i=0; i<size; i++){
        if( arr[i]< minNum){
        minNum=Secmin;
        Secmin=arr[i];
        }
        else if(arr[i]> minNum && arr[i]<Secmin){
        Secmin=arr[i];
        }
    }
    cout<<"Second minimum number is : "<<Secmin;
    return 0;
}