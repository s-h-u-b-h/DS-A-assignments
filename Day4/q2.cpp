/*Let's call an array arr a mountain if the following properties hold:
arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
Given an integer array arr that is guaranteed to be a mountain, return any i such that 
arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=1, mid, pos;
        int h=arr.size()-2;
        while(l<=h)
        {
            mid=l+((h-l)/2);
            if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
                pos=mid;
                break;
            }else if(arr[mid]>arr[mid-1]) l=mid+1;
            else h=mid-1;
        }
        return pos;
    }
};