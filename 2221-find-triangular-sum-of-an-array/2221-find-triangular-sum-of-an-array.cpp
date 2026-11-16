class Solution {
public:
    int triangularSum(vector<int>& nums) {
        //brute forcee 
        while(nums.size()>1)
        {
            vector<int>newnums(nums.size()-1);
            for(int i=0;i<nums.size()-1;i++)
            {
                newnums[i]=(nums[i]+nums[i+1])%10;
              //  cout<<nums[i]<<" ";
            }
           // cout<<endl;
            nums=newnums;
        }
        return nums[0];
    }
};