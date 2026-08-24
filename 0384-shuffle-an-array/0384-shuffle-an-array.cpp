class Solution {
public:
vector<int>arr;
vector<vector<int>>re;
void fun(vector<int>& arr, vector<int>& v,
         vector<int>& s, vector<vector<int>>& re)
{
    if (s.size() == arr.size()) {
        re.push_back(s);
        return;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (v[i] == 0) {
            v[i] = 1;
            s.push_back(arr[i]);

            fun(arr, v, s, re);

            s.pop_back();
            v[i] = 0;
        }
    }
}
    Solution(vector<int>& nums) {
        for(auto it:nums)
        arr.push_back(it);
        vector<int>v(nums.size(),0);
        vector<int>s;
       
    }
    
    vector<int> reset() {
        return arr;
    }
    
    vector<int> shuffle() {
        vector<int> temp = arr;

    for (int i = temp.size() - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(temp[i], temp[j]);
    }

    return temp;
       
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */