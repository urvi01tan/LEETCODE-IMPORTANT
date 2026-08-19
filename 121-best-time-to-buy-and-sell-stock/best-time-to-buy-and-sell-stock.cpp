class Solution {
public:
    int maxProfit(vector<int>& prices) {
      ///min heappppp variableee to store min let
      int minleft=1e8;
      int p=prices.size();
      int ans=0;
      for(int i=0;i<p;i++)
      {
if(prices[i]<minleft)
{
    minleft=prices[i];
}
else
{
    //previously minleft vale din buy karke aaj bhej deta hu minleft cp<sp
    ans=max(ans,prices[i]-minleft);
}
      }  
      return ans;
    }
};