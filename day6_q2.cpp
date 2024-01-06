class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        while(q.size()!=1){
            int temp=k-1;
            while(temp>0){
                int t=q.front();
                q.pop();
                q.push(t);
                temp--;
            }
            q.pop();
        }
        return q.front();
    }
};
