class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        //plank size=n
        for(int i=0;i<left.size();i++)
        {
            ans=max(ans,abs(0-left[i]));
        }
        for(int i=0;i<right.size();i++)
        {
            ans=max(ans,abs(right[i]-n));
        }
        return ans;
    }
};