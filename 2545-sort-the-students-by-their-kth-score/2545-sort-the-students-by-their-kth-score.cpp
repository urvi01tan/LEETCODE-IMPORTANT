class Solution {
public:
struct cmp{
    public:
    bool operator()(int a,int b)
    {
        return a>b;
    }
};
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n=score.size();
        int m=score[0].size();
 vector<pair<int,int>>vec;
        int p=0;
        for(auto it:score)
        {
            vec.push_back({it[k],p});
            p++;
        }
        sort(vec.begin(),vec.end());
        vector<vector<int>>result;
        for(int i=vec.size()-1;i>=0;i--)
        {
            result.push_back(score[vec[i].second]);
            cout<<vec[i].first<<" "<<vec[i].second<<" "<<endl;
        }
        return result;
    }
};