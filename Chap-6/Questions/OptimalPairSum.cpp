// Optimal Pair Sum - Two Pointer Approach (O(n) time)

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    
    while(left < right) {
        int sum = nums[left] + nums[right];
        
        if(sum == target) {
            return {left, right};  
        }
        else if(sum < target) {
            left++;   
        }
        else {
            right--; 
        }
    }
    
    return {};  
}

int main() {
    vector<int> nums = {2, 7, 11, 15}; 
    int target = 9;
    
    vector<int> result = pairSum(nums, target);
    
    if(!result.empty()) {
        cout << "Pair found at indices: " << result[0] << ", " << result[1] << endl;
        cout << "Values: " << nums[result[0]] << " + " << nums[result[1]] << " = " << target << endl;
    } else {
        cout << "No pair found!" << endl;
    }
    
    return 0;
}