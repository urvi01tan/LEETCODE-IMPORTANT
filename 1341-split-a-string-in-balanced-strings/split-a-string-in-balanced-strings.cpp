class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0;
        int r=0;
        int counter=0;
        int left=0;
        int right=0;
        while(right<s.size())
        {
            if(s[right]=='L')l++;
            else
            r++;
            if(l==r)
            {
                //split
                counter++;
                l=0;
                r=0;
            }
            right++;
        }
        return counter;
    }
};