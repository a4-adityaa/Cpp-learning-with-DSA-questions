// max subaray sum;

#include<iostream>
using namespace std;

int main(){

    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=9;

    int maxSum= INT_MIN;

    for(int st=0; st<size; st++){
        int currSum=0;
        for(int end=st; end<size; end++) {
            currSum += arr[end];
            maxSum= max(currSum, maxSum);
        }
    }
    cout<< "max sum of array is: " << maxSum << endl;
    return 0;
}

