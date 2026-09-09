class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        bool laft=false,right=false;
        while(l<=r)
        {
        if(arr[l]<arr[l+1])
        {
            l++;
        }
        else
        {
            return l;
        }
        if(arr[r]<arr[r-1])
        {
            r--;
        }
       else
       {
        return r;
       }


        }
        cout<<l<<" "<<r<<endl;
        return 0;
    }
};