class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<pair<int,int>>vec;
        for(auto it:intervals)
        {
            int s=it[0];
            int e=it[1];
            vec.push_back({s,e});
        }
        sort(vec.begin(),vec.end());
        vector<vector<int>>ans;

        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:vec)
        {
            int s=it.first;
            int e=it.second;
     
            //if pq.top()>s isme hum nih  daal sakteee
            //s> pq.top() toh hum daal saktehai 
            //agar pq.top()..end potimint <s toh hum usse resue kar sakte hai but agar nhi toh merge nih kareng but new add karenge kyunlki baki jitne bhiiii end times hai vo usse chite hi haii 
            if(!pq.empty() && pq.top()<s)
            pq.pop();
            pq.push(e);

            }
        
        return pq.size();

    }
};