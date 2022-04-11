class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        //creating an extra array to store the count of unique occuerences
        vector<int>cnt;
        int c=1;
        
        //base case 
        if(arr.size()==1)
            return 1;
        if(arr.size()==2)
        {
            if(arr[0]==arr[1])
                return 1;
            else
                return 0;
        }
        
    //traversing the array and if a reapted element is found, removing from array and increasing the count
        //removing is done to avoid repetition of elements of count
        
      for(int i=0;i<arr.size()-1;i++)
      {
          c=1;
        int n=arr.size();
          for(int j=i+1; j<n;)
          {
          if(arr[i]==arr[j])
          {
              arr.erase(arr.begin()+j);
              c++;
              n--;
          }
              else
              j++;
      }
          cnt.push_back(c);
    }
        
        //Checking if the array of count created above has all unique elements.
        for(int i=0;i<cnt.size()-1;i++)
        {
            for(int j=i+1;j<cnt.size();j++)
            {
                if(cnt[i]==cnt[j])
                    return false;
            }
        }
        return true;
    }
};