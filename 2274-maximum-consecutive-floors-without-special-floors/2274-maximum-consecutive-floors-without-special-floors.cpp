class Solution {
public:
    int maxConsecutive(int bottom, int top, vector<int>& special) {
    sort(special.begin(),special.end());
    int maxi=0;
    int n=special.size();
    for(int i=0;i<n;i++)
    {
if(i==0)
{
    maxi=max(maxi,special[i]-bottom);
}
else
{
    maxi=max(maxi,special[i]-special[i-1]-1);
}
    }
    maxi=max(maxi,top-special[n-1]);
    return maxi;
    }
};