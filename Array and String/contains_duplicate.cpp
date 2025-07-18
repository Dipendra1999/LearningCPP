#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        int len=nums.size();
        /*unordered_map<int , bool> mp;
        for(int i=0;i<len;i++){
            if(mp[nums[i]]) return true;
            else{
                mp[nums[i]]=true;
            }
        }
        return false;
        */
        sort(nums.begin(),nums.end());
        for(int i=0;i<len-1;i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
}
int main(){

}