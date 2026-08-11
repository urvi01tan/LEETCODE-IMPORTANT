// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        //isBadVersion pehlaaa 
        int l=1;
        int r=n;
        int counter=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(isBadVersion(mid))
            {
                r=mid-1;
                counter=mid;
            }
            else 
            {
                l=mid+1;
            }
        }
        return counter;
    }
};