class Solution {
public:
bool dfs(vector<vector<int>>&graph,int node,vector<int>&c)
{
   // v[node]=1;
   // if(parent==-1)c[node]=0;

    for(auto it:graph[node])
    {
        if(c[it]==-1)
        {
            if(c[node]==0)c[it]=1;
            else
            c[it]=0;
           if(! dfs(graph,it,c))return false;
        }
        else
        {
            if(c[node]==c[it])return false;

        }
    }
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        //vector<int>v(n+1,0);
        
        for(int i=0;i<n;i++)
        { vector<int>c(n+1,-1);
        c[i]=0;
            if(!dfs(graph,i,c))return false;
        }
        return true;
        }
};