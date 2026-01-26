// max subaray sum using kadane's algorithm;

#include<iostream>
using namespace std;

int main(){

    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=9;

        int maxSum= INT_MIN;
        int currSum=0;

    for(int i=0; i<size; i++){
        currSum += arr[i];
        maxSum= max(currSum, maxSum);

        if(currSum< 0) {
            currSum=0;
        }
    } cout<< "max sum of Subarray is: " << maxSum << endl;
    return 0;
}