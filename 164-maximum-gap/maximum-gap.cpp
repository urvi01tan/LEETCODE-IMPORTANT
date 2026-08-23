class Solution {
public:
//TC=O(D*(N+K))D-->TOTAL DIGITS K------> BASE VALUE 10->DIGITS
void countsort(vector<int>&a,int n,int pos)
{
    vector<int>count(10,0);
    for(int it:a)
    {
        int las=(it/pos)%10;
        count[las]++;
    }
    //update count array
    for(int i=1;i<=9;i++)
    count[i]=count[i]+count[i-1];

    vector<int>b(n,0);
    for(int i=n-1;i>=0;i--)
    {
        int last=(a[i]/pos)%10;
        count[last]--;
        b[count[last]]=a[i];
    }
    for(int i=0;i<n;i++)
    a[i]=b[i];
    return ;
}
void radixsort(vector<int>&a,int n)
{int maxi=-1e8;
for(auto it:a)
{
    maxi=max(maxi,it);
}

    for(long long pos=1;maxi/pos>0;pos*=10)
    {
        countsort(a,n,pos);
    }
    return ;
}
    int maximumGap(vector<int>& nums) {
        
        int n=nums.size();
        if(n < 2) return 0;
        radixsort(nums,n);
        int maxi=0;
     //   for(auto it:nums)cout<<it<<" ";
        for(int i=0;i<n-1;i++)
        maxi=max(maxi,nums[i+1]-nums[i]);
        return maxi;
    }
};