class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row=matrix.size();
        int col= matrix[0].size();
        
        int start=0;
        //Starting from 0, col will go till row*col -1, i.e. 3X3= 3*3-1 = 8, so 0 to 8
        
        int end= row*col -1;
        
          //Binary Search in 2D Arrays
        int mid = start +(end-start)/2;
        
        while(start <= end)
        {
/* 
Here, inorder to apply Binary search in a matrix, we are mapping the mid element with the row and col index of the matrix. So, we are finding out the mi in linear form which is 6th Index, now we have to find the element at that 6th index present in the matrix, so we have to find it's row and col. so, row = mid/col = 6/4 =1, col= mid%col = 6%4 = 2, so mid element is present at matrix index [1,2].
For col, if we mod any number so answer comes between 0 to n-1. so, if we will mod col then the answer will come btw 0 to col-1 = 0 to 3. So, we will get index of column.
*/
            
            int element = matrix[mid/col][mid % col];
            
            if(element == target){     //Element Found
                return 1;
            }
            
            if(element < target){
                start = mid+1;
            }
            else{
                end= mid-1;
            }
        
            mid = start +(end-start)/2;
        }
        return 0;
    }
};