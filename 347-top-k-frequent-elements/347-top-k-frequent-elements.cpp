class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> arr;
        vector<int> ans;
        int freq = 1;    //Count of total number of occurences
        
        sort (nums.begin(), nums.end()); //Sorting array
        
        for (int i=0; i<nums.size()-1; i++) {
            if(nums[i]==nums[i+1]){  
                freq++;
            }
            else { 
                arr.push_back({freq,nums[i]});   // {3, 1} => freq,nums[i]
                freq = 1; //resetting freq for each time there is change
            }
        }
        arr.push_back( {freq, nums[nums.size()-1]} );
        
        sort (arr.rbegin(), arr.rend()); 
        //rbegin()=> returns a reverse iterator pointing to the last element in the container.
        
        for (int i=0; i<k; i++) {
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};