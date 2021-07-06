#include<bits/stdc++.h>
using namespace std;
vector<int> decode(vector<int>& encoded, int first) {
        vector<int> op;
        op.push_back(first);
        int res;
        for(int i=0;i<encoded.size();i++)
        {
            res=op[i]^encoded[i];
            op.push_back(res);
        }
        return op;
    }
int main()
{
 vector<int> encoded;
 int n;
 cin>>n;
 int val;
 for(int i=0;i<n;i++)
    {
        cin>>val;
        encoded.push_back(val);
    }
 int first;
 cin>>first;
 vector<int>op;
 op=decode(encoded,first);
 for(auto i:op)
    cout<<i<<" ";
}