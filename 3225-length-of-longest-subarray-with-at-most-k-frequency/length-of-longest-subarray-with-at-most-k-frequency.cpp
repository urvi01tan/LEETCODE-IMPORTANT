class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
    int l=0;
    int size=-1e8;
    for(int r=0;r<nums.size();r++)
    {
        mp[nums[r]]++;
        while(mp[nums[r]]>k)
        {
            //remove last element and move l 
            mp[nums[l]]--;
            l++;
        }
        size=max(size,r-l+1);
    }
    //cout<<size;
    return size;
    }
};