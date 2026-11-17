class Solution {
public:
bool self(int i)
{
    vector<int>digit;
    int k=i;
    while(i>0)
    {     int d = i % 10;

            if(d == 0)
                return false;

            digit.push_back(d);
        i=i/10;
    }
    for(auto it:digit)
    {
        if(k%it!=0)return false;
    }
    return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
       //BRUTE FORCE 
       vector<int>ans;
       for(int i=left;i<=right;i++)
       {
        if(self(i))
        ans.push_back(i);
       }
       return ans;
    }
};