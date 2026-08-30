class Solution {
public:
    int minDeletion(vector<int>& nums) {
       int n=nums.size();
       if(nums.size()==1)return 1;
       //delet as max adjacent 
       int d=0;
       for(int i=0;i<n-1;i++)
       {
        int index=i-d;
        if(index%2==0 && nums[i]==nums[i+1])
        { cout<<"deleted:"<<i<<endl;
            d++;
        }
       } 
       int left=n-d;
       if(left%2!=0)d++;
       return d;
    }
};