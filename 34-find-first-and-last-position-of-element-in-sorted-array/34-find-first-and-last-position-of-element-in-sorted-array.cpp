class Solution {
public:
   int GiveMeFirstPosition(vector<int>&nums, int start, int end,int target){
        int ans=-1;
        int mid=start+(end-start)/2; // handling edge case
        while(start<=end){
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    
    // last Position
    int GiveMelastPosition(vector<int>&nums, int start, int end,int target){
        int ans=-1;
        int mid=start+(end-start)/2; 
        while(start<=end){
            if(nums[mid]==target){
                ans=mid;
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {GiveMeFirstPosition(nums,0,nums.size()-1,target),GiveMelastPosition(nums,0,nums.size()-1,target)};
    }
};