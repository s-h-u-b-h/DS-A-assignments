
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    char arr2[n];
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    char arr3[n];
    for(int i=0;i<n;i++)
        arr3[arr[i]]=arr2[i];
    for(int i=0;i<n;i++)
        cout<<arr3[i]<<" ";
    cout<<endl;
}