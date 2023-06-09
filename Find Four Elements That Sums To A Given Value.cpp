#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-3;i++)
    {
      for(int j = i+1;j<n-2;j++)
      {
          int t = target - (arr[i]+arr[j]);
          int low = j+1,high = n-1;
          while(low<=high)
          {
              if(arr[low]+arr[high]==t)
              {
                  return "Yes";
              }else if(arr[low]+arr[high]>t)
              {
                 high--;
              }else{
                  low++;
              }
          }
      }
    }
    return "No";
}
