/*
class Solution {
public:
    void reverseString(vector<char>& s, int i = 0) {
        int n = s.size();

        if (i >= n / 2) return;

        swap(s[i], s[n - i - 1]);

        reverseString(s, i + 1);
    }
};

using recursion
class Solution {
public:
    void helper(vector<char>& s, int i) {
        int n = s.size();

        if (i >= n / 2) return;

        swap(s[i], s[n - i - 1]);

        helper(s, i + 1);
    }

    void reverseString(vector<char>& s) {
        helper(s, 0);
    }
};*/