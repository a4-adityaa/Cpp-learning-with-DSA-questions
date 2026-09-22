#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>arr, int n){
    if(n==1 || n==0){
        return true;
    }
    if(arr[n-1]<arr[n-2]){
        return false;
    }
    return isSorted(arr,n-1);
}

int main(){
    vector<int> arr = {1,2,3,9,5,6,7};

    cout << isSorted(arr,arr.size()) << endl;
    return 0;
}