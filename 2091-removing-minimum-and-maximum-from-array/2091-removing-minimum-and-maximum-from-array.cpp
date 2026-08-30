class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
       int mini=1e8,minindex=-1;
       int maxi=-1e8,maxindex=-1;
       int n=nums.size();
       for(int i=0;i<nums.size();i++)
       {
        int a=nums[i];
        if(a>maxi)
        {
            maxi=a;
            maxindex=i;
        }
        if(a<mini)
        {
            mini=a;
            minindex=i;
        }
       } 
      cout<<minindex<<" "<<maxindex<<endl;
       int  right1=n-minindex;
       int right2=n-maxindex;
       int onlyleft=max(maxindex,minindex)+1;
       int onlyright=max(n-maxindex,n-minindex);
       int both=min(maxindex,minindex)+n-max(maxindex,minindex)+1;
       cout<<"left:"<<onlyleft<<":right:"<<onlyright<<":both:"<<both<<endl;
       return min({onlyleft,onlyright,both});
    }
};