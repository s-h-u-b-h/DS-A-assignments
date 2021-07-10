/*
Given two binary strings a and b, return their sum as a binary string.
*/
class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int m=a.size()-1,n=b.size()-1;
        int carrybit=0;
        while(m>=0||n>=0)
        {
            int p=m>=0?a[m--]-'0':0;
            int q=n>=0?b[n--]-'0':0;
            int sum=p+q+carrybit;
            ans=to_string(sum%2)+ans;
            carrybit=sum/2;    
        }
        if(carrybit) ans="1"+ans;
        return ans;
        
        
    }
};