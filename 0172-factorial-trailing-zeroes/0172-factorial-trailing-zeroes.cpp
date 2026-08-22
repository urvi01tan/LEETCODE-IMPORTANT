class Solution {
public:
    int trailingZeroes(int n) {
        if(n<5)return 0;
        int curr=5;
        int ans=0;
        for(int i=1;i<6;i++)
        {
            int z=n/pow(curr,i);
            ans+=z;
            if(z==0)break;
        }
        return ans;
    }
};