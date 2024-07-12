class Solution {
private:
    int removePairs(string &s, char first, char second, int score) {
        vector<char> v;
        int ans = 0;
        for (char c : s) {
            if (!v.empty() && v.back() == first && c == second) {
                ans += score;
                v.pop_back();
            } else {
                v.push_back(c);
            }
        }
        s = string(v.begin(), v.end());
        return ans;
    }
public:
    int maximumGain(string s, int x, int y) {
        int ans = 0;
        if (x > y) {
            ans += removePairs(s, 'a', 'b', x);
            ans += removePairs(s, 'b', 'a', y);
        } else {
            ans += removePairs(s, 'b', 'a', y);
            ans += removePairs(s, 'a', 'b', x);
        }
        return ans;
    }
};
