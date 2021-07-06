#include<bits/stdc++.h>
using namespace std;

int binary_search(int key,int copy[],int l,int u)
{
    while(l<u)
    {
        int mid=l+(u-l)/2;
        if(key==copy[mid])
            return mid;
        else if(key<copy[mid])
            u=mid-1;
        else
            l=mid+1;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int copy[n];
    for(int i=0;i<n;i++)
        copy[i]=arr[i];
    sort(copy,copy+n);
    int res[n];
    for(int i=0;i<n;i++)
    {
        int index=binary_search(arr[i],copy,0,n);
         while(1)
        {
            if(copy[index-1]==copy[index])
            index--;
            else break;
        }
        res[i]=index;
    }
    for(int i=0;i<n;i++)
        cout<<res[i]<<" ";
   return 0;
}