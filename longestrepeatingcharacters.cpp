/*
class Solution {
public:
    int characterReplacement(string s, int k) {

        int low = 0;
        int res = 0;
        int maxFreq = 0;

        unordered_map<char, int> f;

        for (int high = 0; high < s.size(); high++) {

            f[s[high]]++;

            maxFreq = max(maxFreq, f[s[high]]);

            int len = high - low + 1;

            while (len - maxFreq > k) {

                f[s[low]]--;
                low++;

                len = high - low + 1;
            }

            res = max(res, len);
        }

        return res;
    }
};*/