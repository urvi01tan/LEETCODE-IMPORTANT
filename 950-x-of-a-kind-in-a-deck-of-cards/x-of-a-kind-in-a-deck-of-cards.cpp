class Solution {
public:
    int gcd(int a, int b)
    {
        if(b == 0)
            return a;

        return gcd(b, a % b);
    }

    bool hasGroupsSizeX(vector<int>& deck) {

        map<int,int> mp;

        for(auto it : deck)
            mp[it]++;

        vector<pair<int,int>> vec;

        for(auto it : mp)
        {
            int e = it.first;
            int f = it.second;

            vec.push_back({e, f});
        }

        int gcdo = 0;

        for(int i = 0; i < vec.size(); i++)
        {
            gcdo = gcd(vec[i].second, gcdo);
        }

        cout << gcdo << endl;

        // minimum group size = gcdo
        for(int i = 0; i < vec.size(); i++)
        {
            int fre = vec[i].second;

            if(fre % gcdo != 0)
                return false;
        }

        if(gcdo <= 1)
            return false;

        return true;
    }
};