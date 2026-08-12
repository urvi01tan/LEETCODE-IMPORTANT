class Solution {
public:
    int partitionString(string s) {
        ////count different all 
        int counter=1;
        string k="";
        for(int i=0;i<s.size();i++)
        {
            if(count(k.begin(), k.end(), s[i])==0)
            {
                k=k+s[i];
            }
            else
            { counter++;
                k=s[i];
            }
        }
        //last me jo string aay hai usko add karenge 
       // cout<<counter;
        return counter;
    }
};