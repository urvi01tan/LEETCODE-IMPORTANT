class Solution {
public:
//O(N^2)-->2 possibilit take yah nottake
int fun(int index,vector<pair<int,int>>&vec,int pree,vector<vector<int>>&dp)
{
 if(index==vec.size())return dp[index][pree+1001]=0;
 if(dp[index][pree+1001]!=-1)return dp[index][pree+1001];
 //takeeeee if greater 
 int take=-1e8;
 if(pree==-1001||vec[index].first>pree)
 {
take=1+fun(index+1,vec,vec[index].second,dp);
 }
 //nottakee
 int nottake=0+fun(index+1,vec,pree,dp);
 return dp[index][pree+1001]=max(take,nottake);
}
    int findLongestChain(vector<vector<int>>& pairs) {
        vector<vector<int>>dp(pairs.size()+1,vector<int>(2000+4,-1));
        vector<pair<int,int>>vec;
        for(auto it:pairs)
        {
vec.push_back({it[0],it[1]});
        }
        sort(vec.begin(),vec.end());//O(N*LOG(N));
        int yes=fun(0,vec,-1001,dp);
        //cout<<yes;
        return yes;
    }
};