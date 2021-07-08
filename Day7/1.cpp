/*Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0)return "";
        if(n==1)return strs[0];
        sort(strs.begin(), strs.end());
        int lcs_len=min(strs[0].size(),strs[n-1].size());
        string first=strs[0],last=strs[n-1];
        int i=0;
        for(i=0;i<lcs_len;i++) if(first[i]!=last[i]) break;
        string lcs=first.substr(0,i);
        return lcs;
    }
};