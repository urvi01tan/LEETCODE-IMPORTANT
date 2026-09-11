class Solution {
public:
//brute forceeeeee
int fun(int a)
{
    int c=0;
    while(a)
    {
        c++;
        a=a/10;
    }
    return c;
}
    int findNumbers(vector<int>& nums) {
        int counter=0;
        for(auto it:nums)
        {
            int y=fun(it);
            if(y%2==0)counter++;
        }
        return counter;
    }
};