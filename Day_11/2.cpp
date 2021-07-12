/*
Given a string paragraph and a string array of the banned words banned, return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned, and that the answer is unique.

The words in paragraph are case-insensitive and the answer should be returned in lowercase.
*/
class Solution {
public:
string mostCommonWord(string paragraph, vector<string>& banned) {
    transform(paragraph.begin(),paragraph.end(),paragraph.begin(),::tolower);
    unordered_map<string,int> freq;
    int l=INT_MIN;char ch=39;
    string str="";
    for(int i=0;i<paragraph.size();i++)
    {
        if(paragraph[i]==' ' || paragraph[i]=='.' || paragraph[i]=='!' || paragraph[i]=='?' || paragraph[i]==';' || paragraph[i]==',' || paragraph[i]==ch)
        {       
            if(str=="")continue;
                if(freq.find(str)==freq.end())
                    freq[str]=1;
                else
                    freq[str]++;
            str="";
        }else
        str+=paragraph[i];
    }
    unordered_map<string,int>:: iterator it;
    for(int i=0;i<banned.size();i++){
        if(freq.find(banned[i])!=freq.end()){
         it=freq.find(banned[i]);
        freq.erase(it);
        }
    }
    it=freq.begin();
        while(it!=freq.end())
        {
              if(it->second > l){
                  l=it->second;
                  str=it->first;
              }
             it++;
        }   
    return str;
}
};