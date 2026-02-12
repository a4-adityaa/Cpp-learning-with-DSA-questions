// Recursive Binary Search Implementation

#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target){
    if(start > end){
        return -1;  // Base case: element not found
    }
    
    int mid = start + (end - start) / 2;
    
    if(arr[mid] == target){
        return mid;  // Found
    }
    else if(arr[mid] < target){
        return binarySearch(arr, mid + 1, end, target);  // Search right
    }
    else{
        return binarySearch(arr, start, mid - 1, target);  // Search left
    }
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = 8;
    int target;
    
    cout << "Enter target: ";
    cin >> target;
    
    int result = binarySearch(arr, 0, size - 1, target);
    
    if(result != -1){
        cout << "Element found at index: " << result << endl;
    }
    else{
        cout << "Element not found!" << endl;
    }
    
    return 0;
}
