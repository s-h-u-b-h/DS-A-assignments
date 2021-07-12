/*
Given a string s, return the "reversed" string where all characters that are not a letter stay in the same place, and all letters reverse their positions.
*/
class Solution {
public:
    string reverseOnlyLetters(string S) {

        stack<char> stack;
        for(char c: S)
            if(isalpha(c))
                stack.push(c);

        for(char& c: S)
            if(isalpha(c))
                c = stack.top(), stack.pop();
        return S;
    }
};