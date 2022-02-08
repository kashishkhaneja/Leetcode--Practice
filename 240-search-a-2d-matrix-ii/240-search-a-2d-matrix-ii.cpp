class Solution {  
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row= matrix.size();
        int col= matrix[0].size();
        
        int rowIndex= 0;
        int colIndex= col-1;
         //Starting from col-1, last col, because we know that if elemnt at col[n-1] is 15 then non of the elemnt present in that col will be smaller than 15. (Asc order)
        
        while( rowIndex<row && colIndex>=0)    
           //Starting First row and last column
        {
            int element= matrix[rowIndex][colIndex];  
            
            if(element == target)
            {
                return 1;
            }
            if(element < target)
            {
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        return 0;
    }
};