class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        //brite force
        int mini=1e8;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {int sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+nums[j];
                int diff=j-i+1;
                if(sum>0 && diff<=r && diff>=l && sum<=mini)
                {
                    mini=sum;
                }
            }
        }
        if(mini==1e8)return -1;
        return mini;
    }
};