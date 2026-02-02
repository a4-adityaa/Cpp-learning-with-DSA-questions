// buy and sell stocks problems ;

#include<iostream>
using namespace std;

int maxprofit(int arr[], int n){
    int maxprofit=0; int bestbuy =0;

    for(int i=1; i<n; i++){
        if(arr[i]> bestbuy){
            maxprofit = max(maxprofit, arr[i]-bestbuy);
        }
        bestbuy = min(bestbuy, arr[i]);
    } 
    return maxprofit;
}
int main(){
    int arr[] = {10,2,3,4,5,6,7,8,3};
    int n = 9;

    cout<<maxprofit(arr,n)<<endl;
    return 0;
}