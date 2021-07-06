/*count the Number of consistent string*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	string allowed;
	cin>>allowed;
	int s;
	cin>>s;
	string st;
	vector<string> words;
	for(int i=0;i<s;i++)
	{
		cin>>st;
		words.push_back(st);
	}
	int count=0;
	int result=0;
	
	for(auto it : words)
    {
        for(int k=0;k<it.size();k++)
    	{
    	    count=1;
    		for(int j=0;j<allowed.size();j++)
    		{
    			if(it[k] == allowed[j])
    			{
    			    count=0;
    			    break;
    			}
    		}
    		if(count==1)
    	        break;
    	}
    	if(count==0)
    	    result++;
    }
    
	cout<<result<<endl;
	return 0;
	
 
}