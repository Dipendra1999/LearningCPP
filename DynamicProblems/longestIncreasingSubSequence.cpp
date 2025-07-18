/*
    let the sequence{6 2 5 1 7 4 8 3}
    longestIncreasingSubSequence is {2 5 7 8}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of array:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count_seq[n]={0};
    int maxans=1;
    for(int i=0;i<n;i++){
        count_seq[i]=1;
        for(int j=0;j<i;j++){
            if(arr[j]< arr[i]){
                count_seq[i]=max(count_seq[i], count_seq[j]+1);
            }
        }

        if(maxans<count_seq[i]) maxans=count_seq[i];
    }

    cout<<"longestIncreasingSubSequence is: "<<maxans<<endl;
    
}