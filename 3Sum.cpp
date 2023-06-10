#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
  sort(arr.begin(), arr.end());
  vector<vector<int>> ans;
  for (int i = 0; i < arr.size() - 2; i++) {
    int j = i + 1;
    int k = arr.size() - 1;
    while (j < k) {
      if (arr[j] + arr[k] + arr[i] == K) {
        ans.push_back({arr[i], arr[j], arr[k]});
        while (j < k && arr[j] == arr[j + 1])
          j++;
        while (j < k && arr[k] == arr[k - 1])
          k--;
        j++;
        k--;
      } else if (arr[j] + arr[k] + arr[i] < K)
        j++;
      else
        k--;
    }
    while (i + 1 < arr.size() && arr[i] == arr[i + 1])
      i++;
  }
  return ans;
}
