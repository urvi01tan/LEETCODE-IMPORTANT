class Solution {
public:
    bool checkValidString(string s) {
        int maxi=0;
        int mini=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {maxi++;
            mini++;}
            else if(s[i]==')')
            {
                maxi--;
                mini--;
            }
            else
            {
                mini=mini-1;
                maxi=maxi+1;;
            }
            if(mini<0)mini=0;
            if(maxi<0)return false;
        }
        cout<<maxi<<" "<<mini<<endl;
        if(maxi==0 || mini==0)return true;
        return false;
    }
};