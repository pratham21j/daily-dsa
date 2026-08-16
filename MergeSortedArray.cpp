/*class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i = 0, j = 0;

        while (i < m + j && j < n) {
            if (a[i] < b[j]) {
                i++;
            }
            else {
                // Shift elements to the right
                for (int k = m + j; k > i; k--) {
                    a[k] = a[k - 1];
                }

                a[i] = b[j];
                i++;
                j++;
            }
        }

        // Add remaining elements of b
        while (j < n) {
            a[i] = b[j];
            i++;
            j++;
        }
    }
};*/