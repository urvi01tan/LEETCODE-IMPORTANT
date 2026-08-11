class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
       //prefic summmm
       int n=s.size();
       vector<int>pre(n,0); 
       int counter=0;
       for(int i=0;i<n;i++)
       {
        if(s[i]=='*')counter++;
        pre[i]=counter;
       }
       //left most for eachhhh 
       vector<int>left(n+1,-1);
       int nl=-1;
       for(int i=0;i<n;i++)
       {
        if(s[i]=='|')
        nl=i;
        left[i]=nl;
       }

        vector<int>right(n+1,-1);
       int nr=-1;
       for(int i=n-1;i>=0;i--)
       {
        if(s[i]=='|')
        nr=i;
        right[i]=nr;
       }


       //for each queries process 
       vector<int>ans;
       for(int i=0;i<queries.size();i++)
       {
        int start=queries[i][0];
        int end=queries[i][1];
    //kyaaa start se peh //in between dhekna hai toh start ke baad sabse pehlaaaa
    int l=right[start];
    int r=left[end];
    if(l!=-1 && r!=-1 && l<r)
    {
        int plates=pre[r]-pre[l];
        ans.push_back(plates);
    }
    else
    {
        ans.push_back(0);
    }
       }
       return ans;
    }
};