class Solution {
public:
    
    //2 Pointer approach 
    int removeDuplicates(vector<int>& nums) {
        
        int slowPointer=2;
        
        if(nums.size()<3){
          return nums.size();
        }
        
        for(int fastPointer=2; fastPointer < nums.size(); fastPointer++) {
            if(nums[fastPointer] != nums[slowPointer-2]){

                nums[slowPointer++] = nums[fastPointer];
                
            }
        }
        return slowPointer;
    }
};


/* In this, we are taking two pointers, starting from index 2 as 0th and 1st index elemts will be counted in. Now, we will check whether the element at slowpointer -2 i.e 0th index and fastpointer are equal or not, and if they aren't equal then we will increment both the pointers*/