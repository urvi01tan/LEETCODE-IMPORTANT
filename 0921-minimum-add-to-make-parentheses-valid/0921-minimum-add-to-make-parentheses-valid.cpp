class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        int k=0;
        for(auto it:s)
        {
            if(it=='(')k++;
            else
            {
                k--;
                //closed jyada hogyeeee c<0
                if(k<0){c++;
                k=0;}
            }

        }
        if(k!=0)return c+k;
        cout<<c<<" ";
        return c;

    }
};