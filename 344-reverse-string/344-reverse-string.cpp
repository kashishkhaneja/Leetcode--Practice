class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int e= s.size()-1;
        
        for(int i=0; i<s.size()-1; i++){
        
        while(st<=e)
        {
            swap(s[st],s[e]);
            st++;
            e--;
        }
        }
        
    }
};