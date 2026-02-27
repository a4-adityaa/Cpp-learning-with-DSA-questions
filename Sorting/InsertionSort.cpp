// implement Insertion sort;

#include<iostream>
using namespace std;

int main(){
    int arr[10] ={4,6,2,7,9,1,2,8,3,0};
    int n=10;

    for(int i=1; i<n; i++){
        int currentEle = arr[i];
        int previousEle= i-1;

        while(previousEle >=0 && arr[previousEle]>currentEle){
            arr[previousEle+1] = arr[previousEle];
            previousEle--;
        }
        arr[previousEle+1] = currentEle;
    }
    cout<<"Sorted Array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}