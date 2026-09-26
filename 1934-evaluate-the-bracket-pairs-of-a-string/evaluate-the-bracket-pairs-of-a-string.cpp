class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        // directttt
        unordered_map<string, string> mp;
        string result = "";
        for (auto i : knowledge)
            mp[i[0]] = i[1];
        int start = -1;
        int end = -1;
        string k = "";
        for (auto it : s) {
           if (start == 1 && it!='('&& it!=')') {
    k = k + it;
}
else if (it != '(' && it != ')') {
    result = result + it;
}

if (it == '(') {
    start = 1;
}
else if (it == ')') {
    cout<<k<<endl;
    if (mp.find(k) != mp.end())
        result += mp[k];
    else
        result += '?';

    k = "";
    start = -1;
}
        }
        cout << result;
        return result;
    }
};