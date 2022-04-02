class Solution {
    private:
    
    bool checkPalindrome(string s, int st, int e)
    {
        while(st <= e){
            if(s[st] != s[e])
            {
                return false;
            }
            else
            { 
                st++;
                e--;  
            }
        }
        return true; 
    }
public:
    bool validPalindrome(string s) {
        int st=0;
        int e= s.length()-1;
        
        while(st<=e)
        {
            if(s[st] != s[e])
            {
                return (checkPalindrome(s,st,e-1) || checkPalindrome(s, st+1, e));
                
            }
            st++;
            e--;
        }
        return true;
    }
        
};