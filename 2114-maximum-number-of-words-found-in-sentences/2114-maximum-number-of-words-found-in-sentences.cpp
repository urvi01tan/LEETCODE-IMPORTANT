class Solution {
public:
int ways(string k)
{
    int s=0;
    for(auto it:k)
    {
        if(it==' ')s++;
    }
    return s;
}
    int mostWordsFound(vector<string>& sentences) {
        int maxi=-1e8;
        for(auto it:sentences)
        {
            int loop=ways(it)+1;
            maxi=max(maxi,loop);
        }
        return maxi;
    }
};