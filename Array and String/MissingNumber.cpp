#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
        int len=nums.size();
        int xor1=0, xor2=0;
        for(int i=0;i<len;i++){
            xor2^=i;
            xor1^=nums[i];
        }
        xor2^=len;
        return xor1^xor2;
    }
int main(){

}