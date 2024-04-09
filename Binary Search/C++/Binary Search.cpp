#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
        }
    return -1;
    }
};
int main(){
    int *arr;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,size);
    return 0;
}