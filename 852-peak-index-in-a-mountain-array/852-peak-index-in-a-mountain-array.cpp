class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int s=0;
        int e = arr.size()-1;
        int mid = s+(e-s)/2;
        
        while(s<e){
        if(arr[mid] < arr[mid+1])   //Ans lies on the left of the peak
            s = mid+1;
        
        else
            e = mid;   //Answer lies on the right side or the peak itself
        
        mid = s+ (e-s)/2;
        }
            return s;
    }
   
};