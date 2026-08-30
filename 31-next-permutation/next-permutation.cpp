class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                //bereak point 
                index=i;
                break;
            }
        }
        if(index==-1)
        {
            reverse(nums.begin(),nums.end());
            return ;
        }
        /////just bigger than thiss
        for(int i=n-1;i>=index;i--)
        {
            if(nums[index]<nums[i])
            {
                swap(nums[i],nums[index]);
                break;
            }
        }
        //reverse index+1--->n-1
       sort(nums.begin() + index + 1, nums.end());
        return ;
    }
};