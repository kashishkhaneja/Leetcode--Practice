class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
       int row=grid.size();
        int col=grid[0].size();
        vector<vector<int>> ans(row,vector<int>(col));
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                int colIndex=(j+k)%col; // (j + numbers of columns added)%m
                
                int rowIndex=(i+(j+k)/col)%row; // (i + numbers of rows added)%n 
                
                ans[rowIndex][colIndex]=grid[i][j];
            }
        }
        return ans;
    }
};