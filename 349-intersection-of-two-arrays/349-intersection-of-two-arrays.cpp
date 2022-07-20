class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
        vector<int> ans;
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        
        int n= nums1.size();
        int m= nums2.size();
        
        int i=0, j=0;
        
        while(i<n && j<m)
        {
            
            if(nums1[i]==nums2[j])
            {
                
                ans.push_back(nums1[i]);
                
                 while(i+1 < n && nums1[i+1] == nums1[i])
                    i++;
                 while(j+1 < m && nums2[j+1] == nums2[j])
                    j++;
                
            i++;
            j++;
                
            }
            
            else if(nums1[i] < nums2[j])
                i++;
            
            else
                j++;
        }
        return ans;
        
    }
};