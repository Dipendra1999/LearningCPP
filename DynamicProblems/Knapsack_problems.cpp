/*
    this knapsack problem is different from weight .
    in this problem, we are given coins let{1,3,3,5}
    by using these coins, different possible sum can obtained {0,1,3,4,5,6,7,8,9,11,12}
    2 and 10 cannot be formed by using the coins{1,3,3,5}
    So the problem is . to find different possible sum.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number coins:";
    cin>>n;
    vector<int> coins(n);
    int sum=0;  // max sum by using all coins
    cout<<"enter the coins:"<<endl;
    for(int i=0;i<n;i++){
        cin>>coins[i];
        sum+=coins[i];
    }

    vector<bool> ans(sum+1);
    ans[0]=true;
    for(int i=0;i<n;i++){
        for(int j=sum;j>=0;j--){
            if(ans[j]) ans[j+coins[i]]=true;
        }
    }
    cout<<"Different sum can be formed is:";
    for(int i=0;i<sum+1;i++){
        if(ans[i])  cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}