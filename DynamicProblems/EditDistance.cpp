/* 
    let 2 string.A and B.(can be dissimilar length)
    make A and B equal by applying following 3 types of operation:
    1. remove character from A (any position)
    2. add character to A(any position)
    3. replace a character
     these above 3 operation are edit distance: 
     and Problem is to find the edit distance between 2 given string

*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cout<<"enter the two string: "<<endl;
    cin>>s1>>s2;

    int len1,len2;
    len1=s1.length();
    len2=s2.length();

    int editDistance[len1+1][len2+1];
    for(int i=0;i<=len1;i++){
        editDistance[i][0]=i;
    }
    for(int i=0;i<=len2;i++){
        editDistance[0][i]=i;
    }
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            int cost=1;
            if(s1[i-1] == s2[j-1]) cost=0;
            editDistance[i][j]=min(editDistance[i-1][j-1]+cost, min(editDistance[i-1][j]+1, editDistance[i][j-1]+1));
        }
    }

    cout<<"the editDistance for the two given string A="<<s1<<" and B=" << s2 <<" is : "<<editDistance[len1][len2]<<endl;
    for(int i=0;i<=len1;i++){
        for(int j=0;j<=len2;j++){
            cout<<editDistance[i][j]<<" ";
        }
        cout<<endl;
    }
}