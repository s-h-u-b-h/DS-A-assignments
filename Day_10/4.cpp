/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.
*/
class Solution {
public:
    bool isVowel(char c)
    {
        return(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U');
    }
    string reverseVowels(string s) {
        int left=0,right=s.length()-1;
        while(left<right)
        {
            if(!isVowel(s[left]))
                left++;
            else if(!isVowel(s[right]))
                right--;
            else if(isVowel(s[left]) && isVowel(s[right])){
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};