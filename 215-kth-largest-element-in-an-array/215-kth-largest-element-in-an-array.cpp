class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        //Greater<int> : will sort array in descending order. largest will come 1st. So, k-1 will return the kth largest element
        
        sort(nums.begin(), nums.end(),greater<int>());
        return nums[k-1];
    }
};