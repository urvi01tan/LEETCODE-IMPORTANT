class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
      long long pro = 1;
       int l=0;
    int n=nums.size(); 
    int ans=0;
    for(int i=0;i<n;i++)
    {pro=pro*nums[i];
        while(l<n&&pro>=k)
        {
            pro=pro/nums[l];
            l++;
        }
        
        ans=ans+(i-l+1);
    }
    return ans;
    }
};