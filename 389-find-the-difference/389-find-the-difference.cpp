class Solution {
public:
    
    
    //Time Complexity: O(NlogN), using sorting
    char findTheDifference(string s, string t) {
        
        int n= s.length();
        int m = t.length();
        
        //Sorting both the strings
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
            
        //Traversing entire string and if element is not equal then returning element index
            for(int i=0; i<n; i++){
                if(s[i] != t[i]){
                    return t[i];

            }
        }
        //Returning the extra element 
        return t[m-1] ;
    }
};