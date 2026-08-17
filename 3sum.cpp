/*class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> ans;
        int n = a.size();

        sort(a.begin(), a.end());

        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate first elements
            if (i > 0 && a[i] == a[i - 1])
                continue;

            // Since array is sorted, no possible triplet
            if (a[i] > 0)
                break;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = a[i] + a[j] + a[k];

                if (sum == 0) {
                    ans.push_back({a[i], a[j], a[k]});

                    j++;
                    k--;

                    // Skip duplicates
                    while (j < k && a[j] == a[j - 1])
                        j++;

                    while (j < k && a[k] == a[k + 1])
                        k--;
                }
                else if (sum < 0) {
                    j++;
                }
                else {
                    k--;
                }
            }
        }

        return ans;
    }
};*/