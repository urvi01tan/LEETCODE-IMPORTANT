class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int>mp;
        int i=0;
        for(auto it:messages)
        {
            string send=senders[i];
            i++;
            string ans="";
            int count=0;
            for(auto k:it)
            {
                if(k==' ')
                {
                    count++;
                }
                else
                {
                    ans=ans+it;
                }
            }
            if(ans!="")
            mp[send]=mp[send]+count+1;
        }
        priority_queue<pair<int,string>>pq;
        for(auto it:mp)
        pq.push({it.second,it.first});
       string re=pq.top().second;
        return re;
    }
};