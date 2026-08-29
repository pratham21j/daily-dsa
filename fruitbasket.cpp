/*class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int res = 0;

        unordered_map<int, int> f;

        for (int high = 0; high < fruits.size(); high++) {

            // Add current fruit
            f[fruits[high]]++;

            // More than 2 different fruits
            while (f.size() > 2) {

                f[fruits[low]]--;

                if (f[fruits[low]] == 0) {
                    f.erase(fruits[low]);
                }

                low++;
            }

            // Current window has at most 2 fruit types
            int len = high - low + 1;
            res = max(res, len);
        }

        return res;
    }
};*/