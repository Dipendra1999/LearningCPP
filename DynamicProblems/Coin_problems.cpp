#include<bits/stdc++.h>
using namespace std;
vector<int > coin;
int INF=100000;


    // recursive solution without memoization
int solve1(int x){
    if(x==0) return 0;
    if(x<0) return INF;
    int best=INF;
    for(auto c:coin){
        best=min(best,solve1(x-c)+1);
    }
    return best;
}

bool ready[10000];
int value[10000];
// recursive with memoization
int solve2(int x){
    if(x==0) return 0;
    if(x<0) return INF;
    if(ready[x]) return value[x];
    int best=INF;
    for(auto c:coin){
        best=min(best,solve1(x-c)+1);
    }
    ready[x]=true;
    value[x]=best;
    return best;
} 
int main(){
    cout<<"enter the number dinomination of coins=";
    int n;
    cin>>n;
    int x;
    cout<<"enter the value of coin:";
    for(int i=0;i<n;i++){
        cin>>x;
        coin.push_back(x);
    }
    cout<<"enter the value=";

    int num;
    cin>>num;
    cout<<"Minimum number of coins needed for making value="<<solve1(num)<<endl;
    cout<<"Minimum number of coins needed for making value="<<solve2(num)<<endl;

    // iterative version
    //value[0] = 0;
    //for (int x = 1; x <= n; x++) {
    //value[x] = INF;
    //for (auto c : coins) {
    //if (x-c >= 0) {
    //value[x] = min(value[x], value[x-c]+1);
    //}
    //}
    //}
}