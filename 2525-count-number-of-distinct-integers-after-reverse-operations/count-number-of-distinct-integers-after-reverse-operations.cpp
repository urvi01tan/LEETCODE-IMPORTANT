class Solution {
public:
int reverse(int a)
{
    int l=0;
    while(a)
    {
        l=l*10+a%10;
        a=a/10;
    }
    return l;
}
    int countDistinctIntegers(vector<int>& nums) {
        set<int>st;
        for(auto it:nums)
        st.insert(it);
      //  cout<<st.size()<<endl;
        //cout<<"guyg"<<endl;
        for(auto it:nums)
        { 
            int you=reverse(it);
            //cout<<you<<endl;
            st.insert(you);
        }
      //  cout<<st.size();
        return st.size();
    }
};