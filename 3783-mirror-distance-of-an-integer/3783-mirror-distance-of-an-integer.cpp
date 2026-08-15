class Solution {
public:
    int mirrorDistance(int n) {
        ///reverse
        int o=n;
        int r=0;
        while(n)
        {
            int k=n%10;
            r=r*10+k;
            n=n/10;
        }
        return abs(o-r);
    }
};