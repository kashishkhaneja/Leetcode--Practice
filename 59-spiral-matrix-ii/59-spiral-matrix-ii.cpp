class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int startingRow=0;
        int startingCol= 0;
        int endingRow= n-1;
        int endingCol= n-1;
        int count =1;
        int total = n*n;
        //vector<int> ans;
        vector<vector<int>>result (n, vector<int>(n));
        
        while(count<=total)
        {
        for(int i=startingCol; i<=endingCol ;i++){
           result[startingRow][i] = count;
            count++;
        }
        startingRow++;
        
        for(int i=startingRow; i<=endingRow ; i++)
        {
          result[i][endingCol]= count;
            count++;
            
        }
        endingCol--;
        
        for(int i=endingCol; i>=startingCol ; i--)
        {
            result[endingRow][i]= count;
            count++;
           
        }
        endingRow--;
        
        for(int i=endingRow; i>=startingRow ; i--){
            result[i][startingCol]= count;
            count++;
            
        }
        startingCol++;
        }
        
        return result;
    }
};