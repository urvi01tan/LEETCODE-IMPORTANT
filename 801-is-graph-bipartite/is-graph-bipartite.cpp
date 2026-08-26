class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        bool canwe=false;
    int n=graph.size();
    for(int i=0;i<n;i++)
    {
        vector<int>c(n+1,-1);
        queue<int>pq;
        pq.push(i);
        c[i]=0;
        while(!pq.empty())
        {
            int node=pq.front();
            pq.pop();
            for(auto it:graph[node])
            {
                if(c[it]==-1)
                {
                    if(c[node]==0)
                    {
                        c[it]=1;
                        pq.push(it);
                    }
                    else
                    {
                        c[it]=0;
                        pq.push(it);
                    }
                }
                else
                {
                    if(c[it]==c[node])return false;
                    else
                    continue;
                }
            }
        }
    }
    return true;
    }
};