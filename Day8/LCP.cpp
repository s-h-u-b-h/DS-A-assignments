/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(arr.size()==0)
    {
        cout<<"";
        return 0;
    }
    if(arr.size()==1)
    {
        cout<<arr[0];
        return 0;
    }
    string s;
    for(int i=0;i<min(arr[0].size(),arr[1].size());i++)
        {
            if(arr[0][i]==arr[1][i])
                s+=arr[0][i];
            else
                break;
        }
    for(int i=2;i<arr.size();i++)
    {
        string temp;
        int k=0;
        while((k<s.size()) and (s[k]==arr[i][k]))
        {
            temp+=arr[i][k];
            k++;
        }
        s=temp;
    }
    cout<<s;   
}