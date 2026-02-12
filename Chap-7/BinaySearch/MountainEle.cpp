// peak mountain element in an array using binary search

#include<iostream>
#include<vector>
using namespace std;

int peakelement(vector<int>& arr, int n){
    int st=1, end=n-2;

    while(st<=end){
    int mid= st+ (end-st)/2;

        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if (arr[mid-1] > arr[mid])
        {
            end=mid-1;
        }
        else{
            st= mid+1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={1, 3, 5, 4, 2};
    int n= arr.size();

    int ans= peakelement(arr, n);
    cout<<"Peak element is at index: "<<ans<<" with value: "<<arr[ans]<<endl;

    return 0;
}