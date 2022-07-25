class Solution {
public:
    bool isPalindrome(int x) {
       string a;
        a=to_string(x);
        int s=0;
        int e=a.length()-1;
        while(s<e){
            if(a[s]!=a[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
};