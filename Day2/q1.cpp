#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector< vector<int> > v;
    int n,m,num;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        vector<int> a;
        for(int j=0;j<m;j++)
        {
            cin>>num;
            a.push_back(num);
        }
        v.push_back(a);
    }
    int max_amt=0,sum=0,cust_id=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=v[i][j];
        }
        if(sum>max_amt)
        {
            max_amt=sum;
            cust_id=i+1;
        }
    }

    cout<<"Richest customer id "<<cust_id;
}