/*
Given two n x n binary matrices mat and target, return true if it is possible to make mat equal to target 
by rotating mat in 90-degree increments, or false otherwise.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    cin>>n;
    vector<vector<int> > arr1,arr2;
    for(int i=0;i<n;i++)
    {
        vector<int> row;
        int val;
        for(int j=0;j<n;j++)
        {
            cin>>val;
            row.push_back(val);
        }
        arr1.push_back(row);
    }
    for(int i=0;i<n;i++)
    {
        vector<int> row;
        int val;
        for(int j=0;j<n;j++)
        {
            cin>>val;
            row.push_back(val);
        }
        arr2.push_back(row);
    }
     for(int i=0;i<4;i++)
    {
        for(int i=0;i<n;i++)
            for(int j=i;j<n;j++)
                swap(arr1[i][j],arr1[j][i]);
        reverse(arr1.begin(),arr1.end());
        if(arr1==arr2)
            h=1;
    }
    if(h==1)
        cout<<"true";
    else
        cout<<"false";
 
}