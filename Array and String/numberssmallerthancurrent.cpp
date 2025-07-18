    //constraint
    //2 <= nums.length <= 500
    //0 <= nums[i] <= 100

#include<bits/stdc++.h>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int len=nums.size();
        int arr[101]={0};
        for(int i=0;i<len;i++){
            arr[nums[i]]++;
        }
        int current=arr[0];
        arr[0]=0;
        for(int i=1;i<101;i++){
            int t=arr[i];
            arr[i]=current+arr[i-1];
            current=t;
        }
        vector<int> ans(len);
        for(int i=0;i<len;i++){
            ans[i]=arr[nums[i]];
        }
        return ans;
    }

int main(){

}