//Logic: A+B+C+D = 0 
// Can also be written as:  A+B = -C+D

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        unordered_map<int, int> m;
        int ans =0;
        
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j< nums2.size(); j++){
                
                //Storing all occurrences of nums[i]+nums[j] in hashmap 
                int sum = nums1[i]+nums2[j];
                m[sum]++;
            }
        }
        for(int i=0; i<nums3.size();i++){
            for(int j=0; j<nums4.size(); j++){
                
                //Finding opposite of nums3[i]+nums4[j] in the hashmap
                int sum= nums3[i]+nums4[j];
                
                if(m.find(-1*sum) != m.end()){
                    //Storing the data if found, in ans
                    ans += m[-1*sum];
                }
            }
        }
        return ans;
    }
};