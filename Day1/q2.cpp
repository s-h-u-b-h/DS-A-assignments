/*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
The relative order of the elements may be changed.
Since it is impossible to change the length of the array in some languages,
you must instead have the result be placed in the first part of the array nums. More formally, 
if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result.
It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.
Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.*/
#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)
            return 0;
        int i=0,j=nums.size()-1;
        for(i=0;i<j;i++)
        {
            if(nums[i]==val)
            {
                while(1)
                {
                    if(nums[j]==val)
                    {
                        if(j==i && i==0)
                            return 0;
                        else if(j==i && i!=0)
                        {
                            return j;
                        }
                        else
                            j--;
                    }
                    else
                    {
                        break;
                    }
                }
                nums[i]=nums[j];
                j--;
            }
        }
        if(nums[i]==val && i==j)
            return j;
        return j+1;
    }
    
int main()
{
    vector<int> nums;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    int k;
    cin>>k;
    int res=removeElement(nums,k);
    if(res==0)
     cout<<"[]";
    else
    {
        for(int i=0;i<res;i++)
            cout<<nums[i]<<" ";
    }
}