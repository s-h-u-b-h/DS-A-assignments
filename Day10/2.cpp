/*
Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.
*/
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        char ch;
        while(columnNumber>0){
            ch='A'+(columnNumber-1)%26;
            res=ch+res;
            columnNumber=(columnNumber-1)/26;
        }
        return res;
    }
};