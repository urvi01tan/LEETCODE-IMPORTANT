class Solution {
public:
    int missingInteger(vector<int>& nums) {
        if(nums.size()==1)return nums[0]+1;
    //mappp
    unordered_map<int,int>mp;
    for(auto it:nums)
    mp[it]=1;
    //coujt lengeth and summmm 
    int pre=nums[0];
    int len=1;
    int maxi=-1e8;
    int maxlen=-1e8;
    for(int i=1;i<nums.size();i++)
    { cout<<pre  <<endl;
        int a=nums[i];
        int b=nums[i-1];
        if(b+1==a)
        {
            pre=pre+a;
            len++;
        }
        else
        {
            //vbreakkkkkk
      if(maxi<pre)
      {
        maxlen=len;
        maxi=pre;
        break;
      }
            len=1;
            pre=a;
        }
    }
      if(maxi<pre)
      {
        maxlen=len;
        maxi=pre;
      }
      //find the lqaegrest elennt gretaer 
      int k=maxi;
      while(k!=1e8)
      {
        if(mp.find(k)==mp.end())return k;
        k++;
      }
cout<<maxi<<endl;
return 0;
    }
};