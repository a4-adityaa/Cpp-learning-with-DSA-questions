// program to print all the unique value

#include<iostream>
using namespace std;

int main(){

    int size;
    cout<< "enter size: ";
    cin>> size;

    int arr[size];
    cout<<"enter elements of an array: ";
    for(int i= 0; i<size; i++)
        cin>> arr[i];

    for(int i= 0; i<size; i++){
            int count =0;
        for( int j=0; j<size; j++){
            if(arr[i]== arr[j]){
                count++;
                }    
            }
                if( count==1){
                    cout<< arr[i]<<" ";
                }
    }  cout<< endl;  
    return 0;
}