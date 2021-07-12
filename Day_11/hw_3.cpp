/*
Given an integer n, add a dot (".") as the thousands separator and return it in string format.
*/
class Solution {
public:
    string thousandSeparator(int n) {
        int i,count=-1;
        string k=to_string(n),g="",l="";
        if (k.length()<=3){
            return k; 
        }
        else{
             for (i=k.length()-1;i>=0;i--){
                count++;
                if (count==3){
                    count=0;
                    g+=".";
                }
                g+=k[i];
            }
            for (i=g.length()-1;i>=0;i--){
                l+=g[i];  
            }
        }
        return l;
    }
};