class Solution {
public:
    int sumCounts(vector<int>& nums) {
        //brute force
        int c=0;
        for(int i=0;i<nums.size();i++)
        {set<int>st;
            for(int j=i;j<nums.size();j++)
            {
st.insert(nums[j]);
c=c+st.size()*st.size();
            }
        }
        return c;
    }
};