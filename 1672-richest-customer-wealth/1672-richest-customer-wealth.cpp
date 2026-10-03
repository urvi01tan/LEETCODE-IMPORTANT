class Solution {
public:
int sum(vector<int>&a)
{
    int s=0;
    for(auto it:a)
    s=s+it;
    return s;
}
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=-1e8;
        for(auto it:accounts)
        {
            int k=sum(it);
            maxi=max(maxi,k);
        }
        return maxi;
    }
};