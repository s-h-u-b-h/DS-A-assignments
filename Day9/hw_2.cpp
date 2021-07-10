/*
Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.

A word is a maximal substring consisting of non-space characters only.
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.size() == 0) return 0;
        int len = 0, n = s.size();
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') i --;
        if (i < 0) return len;
        while (i >= 0 && s[i] != ' ') i --, len ++;
        return len;
    }
};