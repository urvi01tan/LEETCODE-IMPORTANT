class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
      int val=0;
      for(auto it:operations)
      {
        if(it=="--X"|| it=="X--")val--;
        else
        val++;
      }  
      return val;
    }
};