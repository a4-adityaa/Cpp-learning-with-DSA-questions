// program to search linear data in an array

#include<iostream>
using namespace std;

int linearSearch(int arr[], int size) {
    int target;
    cout<< "enter the target: ";
    cin>> target;

    for(int i=0; i<size; i++){
    if (arr[i]==target){
    return i;
    }
    } 
    return -1;
}

int main() {
    int size;
    cout<< "enter size: ";
    cin>> size;

    cout<< "enter elements: " << endl;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>> arr[i];
    }

    cout<< linearSearch(arr, size) << endl;

    return 0;
}