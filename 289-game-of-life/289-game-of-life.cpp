class Solution {
private:
   bool isValid(int x,int y,int row,int col){
       //Checks whether cell is within the grid or not
        if(x<0 || x>=row || y<0 || y>=col) return 0;
        return 1;
    }
    public:
    void gameOfLife(vector<vector<int>>& board) {
        int row=board.size();
        int col=board[0].size();
        
        //Direction array for 8 directions
        int dx[8]={-1,-1,-1,0,1,1,1,0};   //On cartesian Plane 
        int dy[8]={-1,0,1,1,1,0,-1,-1};
        
        // vector ans- to store next state
        
        vector<vector<int>>ans(row,vector<int>(col,0));
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int liveCount=0;
                
                // move in all eight direction and count the no. of live cells
                for(int k=0;k<8;k++){
                    int cx=i+dx[k];
                    int cy=j+dy[k];
                    if(isValid(cx,cy,row,col) && board[cx][cy]==1){
                        liveCount++;
            
                    }
                }
            
                // Check if current cell is live or dead and apply rules accordingly and update ans vector
                if(board[i][j]==1){
                    if(liveCount<2 || liveCount >3){
                        ans[i][j]=0;
                    }
                    else{
                        ans[i][j]=1;
                    }
                }
                else{
                    if(liveCount==3){
                        ans[i][j]=1;
                    }else{
                        ans[i][j]=0;
                    }
                }
            }
        }
        // update board to next state
        board=ans;
    }
};
