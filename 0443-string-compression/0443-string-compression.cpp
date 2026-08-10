class Solution {
public:

    void h(int a, vector<char>& arr) {
        while (a) {
            arr.push_back('0' + a % 10);
            a = a / 10;
        }
    }

    int compress(vector<char>& chars) {

        int ans = 0;
        vector<char> arr;

        char curr = chars[0];
        int len = 1;

        for (int i = 1; i < chars.size(); i++) {

            if (chars[i] == curr) {
                len++;
            }
            else {

                // add character
                arr.push_back(curr);

                // add frequency if > 1
                if (len > 1) {

                    vector<char> digit;

                    h(len, digit);

                    reverse(digit.begin(), digit.end());

                    for (auto it : digit) {
                        arr.push_back(it);
                    }
                }

                len = 1;
                curr = chars[i];
            }
        }

        // process last group
        arr.push_back(curr);

        if (len > 1) {

            vector<char> digit;

            h(len, digit);

            reverse(digit.begin(), digit.end());

            for (auto it : digit) {
                arr.push_back(it);
            }
        }

        // copy compressed result back
        chars = arr;

        return arr.size();
    }
};