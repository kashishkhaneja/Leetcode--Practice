class Solution {
public:
    //2 pointers 
    int maxArea(vector<int>& height) {
        int left =0; 
        int right = height.size()-1;
        
        int maxi =0;
        
        while(left < right)
        {
            int width = right -left; 
            int minHeight = min(height[left], height[right]); 
            int area = width * minHeight;
            maxi= max(maxi, area);  
            
            if(height[left] < height[right]){
                left ++;
            }
            else if(height[left] > height[right])
            {
                right --;
            }
            
            else
            {                             //if heights are equal
                left++;
                right--;
            }            
        }
        return maxi;
    }
};