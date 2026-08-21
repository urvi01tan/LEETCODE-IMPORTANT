class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto it:nums2)
        nums1.push_back(it);
        int k=nums1.size();
        sort(nums1.begin(),nums1.end());
        int s=k/2;
        double t=nums1[s];
       
        if(k%2!=0)return double(t);
        double l=nums1[k/2-1]+nums1[k/2];
       
        return l/2;
    }
};