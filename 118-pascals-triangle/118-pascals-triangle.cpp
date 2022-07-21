class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        int n =  numRows;
        
        vector<vector<int>> ans;
        
        if( n == 1)
        {
            ans.push_back({1});
        }
        
        if(n == 2)
        {
            ans.push_back({1});
            ans.push_back({1,1});
        }
        
        if(n >=3)
        {
            ans.push_back({1});
            ans.push_back({1,1});
			
            int level = 2;
            
            for(int i = 1; i<n-1; ++i)
            {
                vector<int> v;
                
                for(int j = 0; j<= level; ++j)
                {
					if(j == 0)
                        v.push_back(ans[i][0]);
                    
                    else if(j == level)
                    v.push_back(ans[i][level-1]);
                    
                    else
                   v.push_back(ans[i][j-1] + ans[i][j]);
                     
                }
                level++;
                ans.push_back(v);
            }
        }
        
        return ans;
    }
    
};