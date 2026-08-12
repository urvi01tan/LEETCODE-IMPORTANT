class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size();
    unordered_map<char,int>mp;
        
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(mp.find(ch)==mp.end())mp[ch]=i;
        }//firsttt 
        //lastttt 

  unordered_map<char,int>last;
        
        for(int i=n-1;i>=0;i--)
        {
            char ch=s[i];
            if(last.find(ch)==last.end())last[ch]=i;
        }


      

//merge karkeee ek naya map banate hiajisme last and firstt interval
int start=-1;
int end=-1;
int len=-1;
vector<int>ans;
for(int i=0;i<n;i++)
{
    char ch=s[i];
    int first=mp[ch];
    int lasto=last[ch];
    if(start==-1 && end==-1)
    {
        //koi element nhi haiii 
        start=first;
        end=lasto;
    }
    else if(first<=end)
    {
        end=max(end,lasto);
    }
    else 
    {
        ans.push_back(end-start+1);
        start=first;
        end=lasto;
    }
}

ans.push_back(end-start+1);


     return ans;
    }
};