/*
Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
*/
class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++)
            s[i]=tolower(s[i]);
        int left=0,right=s.size()-1;
        while(left<right)
        {
            if(s[left]==s[right])
            {
                left++;
                right--;
            }
            else if(!isalnum(s[left]))
                left++;
            else if(!isalnum(s[right]))
                right--;
            else
                return false;
    }
    return true;
    }
};