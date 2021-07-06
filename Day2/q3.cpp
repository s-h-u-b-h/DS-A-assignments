  /*kid_with_tofee*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int toffee;
    cin>>toffee;
    int maximum=*max_element(arr+0,arr+n);
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        arr[i]+=toffee;

    }
    for(int i=0;i<n;i++)
    {
         if(arr[i]>=maximum)
            v.push_back("true");
        else
            v.push_back("false");
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}
