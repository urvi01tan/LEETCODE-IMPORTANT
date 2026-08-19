class Solution {
public:
int fact(int l)
{
    int pro=1;
    while(l!=0)
    {
        pro=pro*l;
        l--;
    }
    return pro;
}
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]].push_back(i);
        }
        int sum=0;
        for(auto it:mp)
        {
            int s=it.second.size();
            cout<<it.first<<" : "<<s<<endl;
            if(s>1)
            {
                int l=s*(s-1)/2;
                cout<<"combination:"<<l<<endl;
                sum=sum+l;
            }
        }
        return sum;
    }
};