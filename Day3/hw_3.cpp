/*Truncate Sentence*/
#include<bits/stdc++.h>
using namespace std;
string truncateSentence(string s, int k) {
        string :: iterator it;
        string s1="";
        int count=0;
        for(it=s.begin();it!=s.end();it++)
        {
            if(*it==' ')
                count++;
            if(count==k)
                break;
            s1+=*it;
        }
        return s1;
     }
int main()
{
    string s;
    getline(cin,s);
    int k;
    cin>>k;
    string res=truncateSentence(s,k);
    cout<<res;
}