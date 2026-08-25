class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        //BRUTE FORCEEE O(N*M)
        int n=profit.size();
        int m=worker.size();
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++)
        {
            vec.push_back({difficulty[i],profit[i]});
        }
        int sum=0;
        sort(vec.begin(),vec.end());
        for(int i=0;i<m;i++)
        {int wd=worker[i];
        int maxi=0;
for(int j=0;j<n;j++)
{
if(vec[j].first>wd)break;
maxi=max(maxi,vec[j].second);
}
      sum=sum+maxi;  }
      return sum;
        
    }

};