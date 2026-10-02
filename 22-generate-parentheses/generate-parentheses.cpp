class Solution {
public:
void ways(string curr,vector<string>&ans,int open,int closed,int n)
{
    //move aheaddddd
   if(open<closed || open>n)return ;
    if(curr.size()==n*2)
    {
        ans.push_back(curr);
        return ;
    }
   

    ways(curr+'(',ans,open+1,closed,n);
    //remove add
   ways(curr+')',ans,open,closed+1,n);
    return;
}
    vector<string> generateParenthesis(int n) {
        string curr="";
        vector<string>result;
        
        ways(curr,result,0,0,n);
        return result;
    }
};