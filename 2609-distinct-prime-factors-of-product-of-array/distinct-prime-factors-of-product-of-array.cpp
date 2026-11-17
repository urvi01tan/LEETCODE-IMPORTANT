class Solution {
public:
bool isprime(int i)
{
    for(int j=2;j*j<=i;j++)
    {
        if(i%j==0 && j!=i)return false;
    }
    return true;
}
void ways(set<int>&st,int num)
{
    for(int i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            //yehhh iska factor h 
            if(isprime(i))
            st.insert(i);
        }
    }
    return ;
}
    int distinctPrimeFactors(vector<int>& nums) {
        //BRUTE FORCE
        int pro=1;
        set<int>st;
        for(auto it:nums)
        {
ways(st,it);
        }
        return st.size();
    }
};