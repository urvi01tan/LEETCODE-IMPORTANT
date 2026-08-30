class Solution {
public:
    typedef pair<int, char> p;
    int minDeletions(string s) {
        priority_queue<p> pq;
        unordered_map<char, int> mp;
        for (auto it : s)
            mp[it]++;
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }
        char ch;
        int fre = 1e8;
        int counter = 0;
        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int f = it.first;
            char e = it.second;
            if (f == 0)
                continue;
            if (f == fre) {
                f--;
                if(f>0)
                {pq.push({f, e});}
                counter++;
            } else {
                ch = e;
                fre = f;
            }
        }
        return counter;
    }
};