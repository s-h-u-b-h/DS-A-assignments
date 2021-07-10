/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char>paren;
        for(char&c:s){
            switch(c){
                case'(':
                case'{':
                case'[':paren.push(c);break;
                case')':
                if(paren.empty()||paren.top()!='(') return false;
                else paren.pop();break;
                case'}':
                if(paren.empty()||paren.top()!='{') return false;
                else paren.pop();break;
                case']':
                if(paren.empty()||paren.top()!='[') return false;
                else paren.pop();break;
                default:;//pass
        }
        }
        return paren.empty();
        }
};
