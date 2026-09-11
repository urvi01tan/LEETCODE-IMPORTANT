class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n=digits.size();
        set<int>st;
        vector<int>ans;
        //concatination of threee digittttttttt 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(i!=j&& j!=k&& i!=k)
                    {
                        if(digits[i]==0)
                        {
                            continue;
                        }
                        else
                        {
                            int number=digits[i]*100+digits[j]*10+digits[k];
                            if(number%2==0)
                            st.insert(number);
                        }
                    }
                }
            }
        }
        for(auto it:st)
        ans.push_back(it);
        return ans;
    }
};