/*
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
    vector<vector<int>>ans;
    int i = 0;
    while(i<intervals.size()-1)
    {
      vector<int>v;
      if(intervals[i][1]>=intervals[i+1][0])
      {
          if(intervals[i][1]>=intervals[i+1][1])
          {
          }else{
            intervals[i][1] = intervals[i+1][1];
          }
          intervals.erase(intervals.begin()+i+1);
      }else{
           i++;
      }
    }
    return intervals;
    }
};
*/
#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        ans.push_back({intervals[0][0], intervals[0][1]});
        int i = 0;
        int merge = 0;
        for(; i < n - 1; i++){
            int j = i+1;
            if(ans[i - merge][1] >= intervals[j][0]){
                ans[i - merge][1] = max(intervals[j][1], ans[i - merge][1]);
                merge++;
            }else{
                ans.push_back({intervals[j][0], intervals[j][1]});
            }
        }
        return ans;
}
