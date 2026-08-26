class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        //brute forceee
        unordered_map<int,int>mp;
        for(int x:nums)
        {
            if(x%2==0)mp[x]++;
        }
        int a=-1;
        int f=0;
        for(auto it:mp)
        {
            int fre=it.second;
            int e=it.first;
            if(fre>f)
            {f=fre;
            a=e;
            }
            else if(fre==f)
            a=min(a,e);
        }
        return a;
    }
};