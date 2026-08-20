class Solution {
public:
    bool divideArray(vector<int>& nums) {
      unordered_map<int,int>mp;
      for(auto it:nums)
      mp[it]++;  
      int p=nums.size()/2;
      for(auto it:mp)
      {
        int fre=it.second;
        if(fre%2!=0)return false;
      }
      return true;
    }
};