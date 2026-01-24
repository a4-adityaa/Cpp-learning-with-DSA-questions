// sum & prodruct of elelments of an array

#include<iostream>
using namespace std;

int main(){

    int size;
    cout<< "enter the size: ";
    cin>> size;

    int sum=0;int product =1;

    int arr[size];
    cout<<" enter the elements of array: ";

    for(int i=0; i<size; i++){
        cin>> arr[i];
    }

    for(int i=0; i<size; i++){
        sum += arr[i];
        product *= arr[i];
    }

    cout<< "sum of digit of an array: " << sum << endl;
    cout << "product of digit an array: " << product << endl;

    return 0;
}