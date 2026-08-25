class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        int MOD=pow(10,9)+7;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:nums)
        pq.push(it);
        while(k--)
        {
            int q=pq.top();
            pq.pop();
            pq.push(q+1);
        }
        long long  pro=1;
        while(!pq.empty())
        { int d=(pro*pq.top())%MOD;
            pro=d;
            pq.pop();
        }
        return pro%MOD;
    }
};