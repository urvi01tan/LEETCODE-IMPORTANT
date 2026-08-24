class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        for(auto it : arr) {
            pq.push({abs(it - x), it});
        }

        vector<int> result;

        while(k-- && !pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
        }

        sort(result.begin(), result.end());

        return result;
    }
};