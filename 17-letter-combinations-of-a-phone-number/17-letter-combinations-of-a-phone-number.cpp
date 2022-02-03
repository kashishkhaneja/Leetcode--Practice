class Solution {
    private:
    
    void solve(string digits, string output, int index, vector<string> &ans, string mapping[]){
        //Base case
        
        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }
        
        int number = digits[index]-'0';  //Will give exact number
        string value = mapping[number];   
        
        for(int i=0; i<value.length(); i++){
            output.push_back(value[i]);
            solve(digits, output, index+1, ans, mapping);
            output.pop_back(); //Backtrack
        }
    }
    
    
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        
        if(digits.length()==0){   //If string is empty
            return ans;
        }
        int index =0;
        string output;
        string mapping[10]= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};