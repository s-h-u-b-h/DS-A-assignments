  /*Given an array of integers nums.
A pair (i,j) is called good if nums[i] == nums[j] and i < j.
Return the number of good pairs.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int gp=0;
    int num[n];
    for(int i=0;i<n;i++)
        cin>>num[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(num[i]==num[j])
                gp+=1;
        }
    }
    cout<<gp;
}
