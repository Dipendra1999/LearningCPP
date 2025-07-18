#include<bits/stdc++.h>
using namespace std;
/*
        in this problem coordinates given. we have to count the number of moves needed to visit all coordinate in the given order only
        and moves count horizontally /vertically/ diagonally by one unit for unit distance 
        */
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        for(int i=0;i<points.size()-1;i++){
            int xx=abs(points[i][0]-points[i+1][0]);
            int yy=abs(points[i][1]-points[i+1][1]);

            int mn=min(xx,yy);
            ans=ans+xx+yy-mn;
        }

        return ans;
    }
};
int main(){

}