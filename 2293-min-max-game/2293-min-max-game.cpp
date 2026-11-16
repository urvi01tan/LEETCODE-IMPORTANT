class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
    while(nums.size()>1)
    {vector<int>newnums;
        for(int i=0;i<nums.size();i=i+2)
        {
            int a=nums[i];
            int b=nums[i+1];
if(i==0 || (i/2)%2==0)
{
newnums.push_back(min(a,b));
}
else
{
newnums.push_back(max(a,b));
}
        }
        nums=newnums;
    }
    return nums[0];
    }
};