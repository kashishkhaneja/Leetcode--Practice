class Solution {
public:
    
    bool isSafe(int row, int col, vector<vector<char>>&board, char ch)
    {
        for(int i=0; i<9; i++)
        {
            if(board[row][i]== ch)
                return false;
            
            if(board[i][col]== ch)
                return false;
            
            if(board[3*(row/3)+ i/3][3*(col/3)+i%3]== ch)
                return false;
        }
        return true;
    }
    
    bool solution(vector<vector<char>>&board)
    {
        // int n= board[0].size();
        
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
               if(board[i][j]=='.'){
                for(char ch='1';ch<='9';ch++){
                    if(isSafe( i, j,board, ch)){
                        board[i][j] = ch;
                    
                        if(solution(board)==true)
                            return true;
                        else
                            board[i][j] = '.';
                    }
                }
                return false;
            }
        }
    }
    return true;
}
    
    
    void solveSudoku(vector<vector<char>>& board) {
       solution(board);
    }
};