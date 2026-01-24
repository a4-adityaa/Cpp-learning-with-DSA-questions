// program to swap max and min value of an array;

#include<iostream>
using namespace std;

int main(){
    int size;
    cout<< "enter size: ";
    cin>> size;

    int arr[size];
    cout<<"emter elelment of an array: ";
    
    for(int i=0; i<size; i++){
        cin>> arr[i];
    }
    int max = arr[0];
    int min = arr[0];

    int maxindex=0;
    int minindex=0;

    for(int i=0; i<size; i++){
        if(arr[i]> max){
        max= arr[i];
        maxindex=i;}

        if(arr[i]< min){
            min= arr[i];
            minindex=i;
        }
    }int temp= arr[maxindex];
    arr[maxindex]= arr[minindex];
    arr[minindex]= temp;

    cout<< "array after swapping max and min value: ";
    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
    return 0;
}