#include<bits/stdc++.h>
using namespace std;
/* we traverse element by element in array and find (target-nums[i]) is present in map->key or not.
if yes then we return position {i,map[target-nums[i]]}
otherwise we add num[i] to map
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(mp.count(x))  return {mp[x],i};
            
            mp[nums[i]]=i;
        }
        return {};
    }
};
int main(){
    int n;  //size of array
    cout<<"size of array=";
    cin>>n;

    vector<int> v;
    int x;

    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int target;
    cout<<"target for two sum=";
    cin>>target;
    Solution s;
    vector<int > ans =s.twoSum(v,target);

    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}