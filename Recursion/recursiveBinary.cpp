# include<iostream>
# include<vector>
using namespace std;

int isSorted(vector<int>arr, int target, int st, int end){
    if(st<=end){
        int mid = st+(end-st)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]> target){
            return isSorted(arr,target,st,mid-1);
        }
        else{
            return isSorted(arr,target,mid+1,end);
        }
    } 
    else {
        return -1;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};

    cout << isSorted(arr,5,0,arr.size()-1) << endl;
    return 0;
}