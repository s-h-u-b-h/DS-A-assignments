/*Create Target Array in the Given Order*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> index;
    vector<int> nums;
    int val=0;
    for(int i=0;i<n;i++)
        {
            cin>>val;
            index.push_back(val);
        }
    for(int i=0;i<n;i++)
        {
            cin>>val;
            nums.push_back(val);
        }
    vector<int> v;
    int pos=0;
    for(int i=0;i<n;i++)
    {
         pos=index[i];
         val=nums[i];
        v.insert(v.begin()+pos,val);
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<"  ";
}