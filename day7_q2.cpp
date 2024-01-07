class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int median=(n%2==0)?((n-1)/2):(n/2),res=0;
        for(auto x:nums) res+=abs(x-nums[median]);
        return res;
    }
};
