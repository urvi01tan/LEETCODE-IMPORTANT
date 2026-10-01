class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        int s=0;
        for(int i=0;i<n;i++)
        {
left[i]=s;
s=s+nums[i];
        }
        s=0;
        for(int j=n-1;j>=0;j--)
        {
            right[j]=s;
            s=s+nums[j];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=abs(left[i]-right[i]);
        }
        return ans;
    }
};