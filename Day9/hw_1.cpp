/*
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/
class Solution {
public:
    int strStr(string a, string b) {
        int m = a.size(), n = b.size();
        if (n == 0) return 0;
        else if (m == 0) return -1;
        vector<int> next(n, -1);
        for (int i = 1, j = -1; i < n; i ++){
            while (j >= 0 && b[i] != b[j + 1]) j = next[j];
            if (b[i] == b[j + 1]) j ++;
            next[i] = j;
        }
        for (int i = 0, j = -1; i < m; i ++){
            while (j >= 0 && (a[i] != b[j + 1])) j = next[j];
            if (a[i] == b[j + 1]) j ++;
            if (j == n - 1) return i - n + 1;
        }
        return -1;
    }
};