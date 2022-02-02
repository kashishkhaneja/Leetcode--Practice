class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        //Using Window Sliding Technique
        //Time Complexity: O(Alphabet Size* length of String(s))
        
        int n=s.length(), m=p.length();
	
    if(m>n)                   //Checking length of p and s
	    return {};
	
	vector<int> pv(26,0), sv(26,0), res;      
        //Storing the frequency of occurance of individual alphabte from a to z
    
    for(int l=0;l<m;l++)         
        
        pv[p[l]-'a']++;    //1st Window 
    
    int i=0, j=0;
    
    while(j<n){
        sv[s[j]-'a']++;
        
		if((j-i+1)<m){            //When the current window size is smaller, just move ahead.
            j++;
        }
        
        else if((j-i+1)==m){                //On hitting the window.

            if(pv==sv)
                res.push_back(i);

            sv[s[i]-'a']--;

            i++;
            j++;
        }
    }
    return res;
	}
};
