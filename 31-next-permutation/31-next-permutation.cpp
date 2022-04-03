class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size(), k, l;       //k = breakpoint
        ////l = Number just greater than breakpoint vaala number
        
        for(k = n-2; k >=0; k--)
        {
            if(nums[k] < nums[k+1])
                break;
        }
        
        if(k < 0){             //No breakpoint present, edge case
            reverse(nums.begin(), nums.end());  //reverse given permutation
        }
        else{
            for(l = n-1; l > k; l--)
            {
                if(nums[l] > nums[k])
                    break;
            }
            swap(nums[k], nums[l]);   
        reverse( nums.begin()+ k + 1, nums.end());
        }
        
    }
};
