class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;
        int sign=1;
        for(auto it:nums)
        {
            sum=sum+sign*it;
            if(sign==1)sign=-1;
            else
            sign=1;
        }
        return sum;
    }
};