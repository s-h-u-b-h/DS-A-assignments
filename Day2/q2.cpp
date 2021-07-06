#include<bits/stdc++.h>
using namespace std;
void getUnion(int a[], int n, int b[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    s.insert(a[i]);
    for (int i = 0; i < m; i++)
    s.insert(b[i]);
    cout<<"Union:"<<endl;
    for (auto itr = s.begin(); itr != s.end(); itr++)
    cout << *itr<<" ";
    cout<<endl;
}
void getInter(int a[], int n, int b[], int m)
{
    map<int,int> mp;
    for(int i=0;i<n;i++)
        mp.insert(pair<int , int>(a[i],1));
    for(int i=0;i<m;i++)
    {
        if(mp.find(b[i])==mp.end())
        {
            mp.insert(pair<int , int>(b[i],1));
        }
        else
        {
            auto itr=mp.find(b[i]);
            (itr->second)++;
        }
    }
   set<int> s;
    for(auto itr=mp.begin(); itr != mp.end(); itr++)
    {
        if((itr->second)!=1)
            s.insert(itr->first);
    }
    cout<<"Intersection:"<<endl;
    for(auto itr=s.begin() ; itr!=s.end() ; itr++)
        cout<<*itr<<" ";
        cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
    getUnion(a, n, b, m);
    getInter(a, n, b, m);
}