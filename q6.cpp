class Solution {
public:
unordered_map<char,string>m;       

void solve(vector<string>& ans,string res,string digits,int ind) {

    if(ind==digits.size()){ 
        if(res.size()>0)
        ans.push_back(res);
        return;
    }
    
    string s=m[digits[ind]];
    for(int i=0;i<s.size();i++) {
        res.push_back(s[i]);
        solve(ans,res,digits,ind+1);
        res.pop_back();
    }
    return;
}


    vector<string> letterCombinations(string digits) {
  //      map<int,vector<char>>m={{2,['a','b','c']},{3,['d','e','f']},{4,['g','h','i']},{5,['j','k','l']},{6,['m','n','o']},{7,['p','q','r','s']},{8,['t','u','v']},{9,['w','x','y','z']}};
            
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        // m[2]=['a','b','c'];
        // m[3]=['d','e','f'];
        // m[4]=['g','h','i'];
        // m[5]=['j','k','l'];
        // m[6]=['m','n','o'];
        // m[7]=['p','q','r','s'];
        // m[8]=['t','u','v'];
        // m[9]=['w','x','y','z'];

        vector<string>ans;
        string res;
        solve(ans,res,digits,0);
        return ans;
    }
};