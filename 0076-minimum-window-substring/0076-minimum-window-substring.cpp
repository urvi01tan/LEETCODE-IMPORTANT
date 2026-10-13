class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>hash(256,0);
        for(char c : t)
            hash[c]++;
        int n=s.size();
        int m=t.size();
        int l=0,r=0,minlength=1e8,sindex=-1;
        int counter=0;
        while(r<n)
        { if(hash[s[r]]>0)counter++;

            hash[s[r]]--;
            
            while(counter==m)
            {  if(r-l+1<minlength)
            {
                minlength=r-l+1;
                sindex=l;
            }
             hash[s[l]]++;
                if(hash[s[l]]>0)counter--;
               
                l++;
            }
            r++;
        }
       return sindex == -1 ? "" : s.substr(sindex, minlength);

    }
};