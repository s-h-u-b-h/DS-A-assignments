/*
Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

In the American keyboard:

the first row consists of the characters "qwertyuiop",
the second row consists of the characters "asdfghjkl", and
the third row consists of the characters "zxcvbnm".
*/
class Solution {
public:
    vector<string> findWords(vector<string> &words) {

        vector<int> dict(26);
        vector<string> rows = { "QWERTYUIOP","ASDFGHJKL","ZXCVBNM" };

        for (int i = 0; i < rows.size(); i++) {
            for (auto c : rows[i]) {
                dict[c - 'A'] = 1 << i;
            }
        }

        vector<string> res;

        for (auto w : words) {
            int r = 7;
            for (auto c : w) {
                r &= dict[toupper(c) - 'A'];
                if (r==0) {
                    break;
                }
            }
            if (r) {
                res.push_back(w);
            }
        }
        return res;
    }
};