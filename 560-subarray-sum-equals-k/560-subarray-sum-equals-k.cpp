class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int size = nums.size();
     map<int,int> temp;
        int sum = 0;
        int count = 0;
        temp[0]++;
        for(int i = 0; i<size;i++)
        {
            sum += nums[i];
            if(temp.find(sum-k)!=temp.end())
                count += temp[sum-k];
            temp[sum]++;   
        }
   return count;         
    }
};