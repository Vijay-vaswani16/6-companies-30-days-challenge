class Solution {
public:
    string getHint(string s, string g) {
        // initialize value of cow and bull
        int bull= 0, cow=0, ln= s.size();
        
        // to store frequency of digits in secret(s) and guess(g)
        vector<int> smap(10,0),gmap(10,0);
        
        
        for(int i=0;i<ln;i++){
            // bull++ ,if elements is same and index as well
            if(s[i]== g[i]) bull++;
            
            smap[s[i]-'0']++;
            gmap[g[i]-'0']++;
        }
        
        
        // store num of elements common in s and g
        for(int i=0;i<10;i++)
            cow+= min(gmap[i], smap[i]);
        
        
        // cow = (number of same elements) - (number of elements with equal value and correct index)
        cow-= bull;
        
        string ans= to_string(bull)+'A'+to_string(cow)+'B';
        return ans;
    }
};
