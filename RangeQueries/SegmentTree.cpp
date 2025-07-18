/*
    what is segment tree ? 
    1.Segment tree is the tree which contains the nodes at bottom level and the information regarding node at above level.
    2.It supports two operation : range queries and updating an array value

    tihis is the example of the sum queries 
                            39                          //all sum
                    22                17                //
              13        9       9           8           //info add
            5    8    6   3   2     7     2    6        // node
*/
#include<bits/stdc++.h>

void makeSegmentTree(int arr[], int len)            // <--for sum queries  / (can also be make for minimum and maximum queries)
{
    for(int i=len-1;i>=1;i--){
        arr[i]=arr[2*i]+arr[2*i+1];  
        //arr[i]=max(arr[2*i], arr[2*i+1]);// for max query            
    }
}

int sumQuery(int arr[], int a, int b){
    int sum=0;
    while(a<=b){
        if(a%2==1) sum+=arr[a++];
        if(b%2==0) sum+=arr[b--];
        a /=2;
        b /=2;
    }
    return sum;
}
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[2*n];
    cout<<"enter the array"<<endl;
    for(int i=n;i<2*n;i++){
        cin>>arr[i];
    }
    makeSegmentTree(arr,n);

    //int q;
    //cout<<"enter the number of queries of sum"<<endl;
    //cin>>q;
    cout<<"enter the two index of array in which you want to find sum:";
    int a,b;
    cin>>a>>b;
    cout<<"the sum of element fo array in range "<<a<<" to "<<b<<" is: "<<sumQuery(arr,a+n,b+n);

}