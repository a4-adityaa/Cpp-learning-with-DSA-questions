// find single element in a single sorted array

#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        int st=0, end=n-1;
        if(n==1){
            return nums[0];
        }
        while(st <= end){
            int mid = st + (end-st)/2;
            if(mid==0 && nums[0] != nums[1]){return nums[0];}
            if(mid==n-1 && nums[n-1] != nums[n-2]){return nums[n-1];}

            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            if(mid %2 == 0){
                if(nums[mid-1]== nums[mid]){
                    end= mid-1;
                }else{
                    st= mid+1;
                }
            }
            else{
                if(nums[mid-1]== nums[mid]){
                    st= mid+1;
                }else{
                    end= mid-1;
                }
            }
        }
    return -1;
};

int main(){
vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
 int result = singleNonDuplicate(nums); 
 if(result != -1){ 
    cout << "The single non-duplicate element is: " << result << endl;
    } else { 
        cout << "No single non-duplicate element found!" << endl; 
    } 
return 0;
}
