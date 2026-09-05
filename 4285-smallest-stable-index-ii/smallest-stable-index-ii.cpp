class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>maxi(n);
        vector<int>mini(n);
        //maxi fill karengeeee
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,nums[i]);
        maxi[i]=ans;
    }
    int fun=INT_MAX;;
    for(int i=n-1;i>=0;i--)
    {
        fun=min(fun,nums[i]);
        mini[i]=fun;
    }
    int index=-1;
    for(int i=0;i<n;i++)
    {
        int one=maxi[i];
        int two=mini[i];
        if(one-two<=k)return i;
    }
    return -1;

    }
};