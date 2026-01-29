#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums){
    int n= nums.size();
    int candidate=0;
    int count=0;

    for(int i=0; i<n; i++){
        if( count==0){
            candidate= nums[i];
        }
        if(candidate== nums[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return candidate;
}

int main(){
    vector<int> nums= {5,2,3,5,3,8,5};

    cout<<majorityElement(nums)<<endl;
    return 0;
}