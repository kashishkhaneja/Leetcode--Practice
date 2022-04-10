class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        vector<int> ans;
      
        for(string value : ops)
        {
        if(value == "C")
            ans.pop_back();
       
        else if( value == "D")
           ans.push_back(ans.back()*2);
        
            else if( value == "+")
                ans.push_back(ans.back() + ans[ans.size()- 2]);
        else
            ans.push_back(stoi(value));    //stoi: converts string to integer value
        
            
        }
        
            return accumulate(ans.begin(), ans.end(), 0);  
            //accumulate: returns sum of all values lying in between the range from start to end with a variable sum.

        
    }
};