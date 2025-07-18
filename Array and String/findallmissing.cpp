#include<bits/stdc++.h>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len=nums.size();
        vector<bool> n(len+1,true);
        vector<int> ans;
        for(int i=0;i<len;i++){
            if(n[nums[i]]) n[nums[i]]=false;
        }
        for(int i=1;i<=len;i++){
            if(n[i]) ans.push_back(i);
        }
        return ans;
    }
int main(){

}