class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<pair<int,int>>vec;
        for(auto it:points)
        {
            int x=it[0];
            int y=it[1];
            vec.push_back({x,y});
        }
        sort(vec.begin(),vec.end());
        int maxi=-1e8;
        int n=vec.size();
        for(int i=0;i<n-1;i++)
        {
            int diff=vec[i+1].first-vec[i].first;
            maxi=max(maxi,diff);
        }
        return maxi;
    }
};