  
//Print Array  in Pattern: 
//arr={a1,a2,a3,a4,x1,x2,x3,x4}
//new arr={a1,x1,a2,x2,a3,x3,a4,x4} 
// Inspace

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int mid=n/2;
    int a[mid],b[mid];
    for(int i=0;i<mid;i++){cout<<arr[i]<<" ";cout<<arr[i+mid];}
    return 0;
}